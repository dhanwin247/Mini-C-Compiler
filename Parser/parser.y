/*
    Mini C Compiler Parser
    Team :
        Sai Krishna Anand -- 181CO244
        Suhas K S -- 181CO253
        Arnav Santosh Nair -- 181CO209
        Dhanwin Rao -- 181CO217
*/
%{
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "include/sym_table.h"

#define TRACE_ENABLED true

// Number of rows in Hash table for symbol and constant tables
#define MAX_NODES 1000

void yyerror(const char * s);

symbol_node_t *symbol_table[MAX_NODES];
symbol_node_t *constant_table[MAX_NODES];

extern char *yytext;
extern int yylineno;

char datatype[100];

%}

// %token INT FLOAT CHAR DOUBLE VOID RETURN
%token SIGNED UNSIGNED LONG SHORT
%token SWITCH BREAK CONTINUE CASE DEFAULT RETURN
%token FOR WHILE DO
%token IF ELSE  
%token <char_ptr> CONSTANT_INTEGER
%token <char_ptr> CONSTANT_FLOAT
%token <char_ptr> CONSTANT_STRING
%token <char_ptr> CONSTANT_CHAR

%token INCLUDE
%token DEFINE

// To allow for mutiple datatypes
%union {
	char char_ptr[100];
}

%token <char_ptr> IDENTIFIER
%token <char_ptr> INT
%token <char_ptr> CHAR
%token <char_ptr> FLOAT
%token <char_ptr> DOUBLE
%token <char_ptr> VOID


%right '=' ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN XOR_ASSIGN OR_ASSIGN         
%left LOGIC_AND LOGIC_OR NOT INCREMENT_OPERATOR DECREMENT_OPERATOR
%left LESSER_EQUAL GREATER_EQUAL DOUBLE_EQUAL NOT_EQUAL LESSER_THAN GREATER_THAN             
%left '+' '-' '*' '/' '%' '^' '&' 

%start Begin

%% 
Begin   
    : Include
    | Include Begin
    | Define Begin
    | Define
    | Declaration
    | Declaration Begin
	| Function_Definition
    | Function_Definition Begin
	;

Declaration
    :  Type Identifier_List ';'    
    ;

Identifier_List
    : Array_Notation
    | IDENTIFIER ',' Identifier_List        {Insert(symbol_table,$1,datatype,yylineno, false);}
    | '*' IDENTIFIER ',' Identifier_List    {
                                                int len = strlen(datatype);
                                                datatype[len] = '*';
                                                datatype[len +1] = '\0';
                                                Insert(symbol_table,$2,datatype,yylineno, false);
                                                datatype[len] = '\0';
                                            }
    | Array_Notation ',' Identifier_List 
    | IDENTIFIER                            {Insert(symbol_table,$1,datatype,yylineno, false);} 
    | '*' IDENTIFIER                        {
                                                int len = strlen(datatype);
                                                datatype[len] = '*';
                                                datatype[len +1] = '\0';
                                                Insert(symbol_table,$2,datatype,yylineno, false);
                                                datatype[len] = '\0';
                                            }
    | Define_Assign ',' Identifier_List
    | Define_Assign 
    ;

Function_Definition
	: Type IDENTIFIER '(' Formal_Param_List ')' Compound_Statement      {                            
                                                                            char funcType[100] = "Function: ";
                                                                            strcat(funcType, datatype);
                                                                            Insert(symbol_table,$2, funcType, yylineno, false);
                                                                        }
	;

Formal_Param_List
	: Type IDENTIFIER                                  {Insert(symbol_table,$2,datatype,yylineno, false);trace("Formal_Param_List Rule 1\n");}
	| Type '*' IDENTIFIER                              {Insert(symbol_table,$3,datatype,yylineno, false);trace("Formal_Param_List Rule 2\n");}
	| Type Array_Notation                              {trace("Formal_Param_List Rule 3\n");}
	| Type IDENTIFIER ',' Formal_Param_List            {Insert(symbol_table,$2,datatype,yylineno, false);trace("Formal_Param_List Rule 4\n");}
	| Type '*' IDENTIFIER ',' Formal_Param_List        {Insert(symbol_table,$3,datatype,yylineno, false);trace("Formal_Param_List Rule 5\n");}
	| Type Array_Notation ',' Formal_Param_List        {trace("Formal_Param_List Rule 6\n");}
	|
	;

Type
    : INT                       {strcpy(datatype, $1);}
    | FLOAT                     {strcpy(datatype, $1);}
    | VOID                      {strcpy(datatype, $1);}
    | CHAR                      {strcpy(datatype, $1);}
    | DOUBLE                    {strcpy(datatype, $1);}
    | Modifiers INT             {strcpy(datatype, $2);}
    | Modifiers FLOAT           {strcpy(datatype, $2);}
    | Modifiers DOUBLE          {strcpy(datatype, $2);}
    | Modifiers CHAR            {strcpy(datatype, $2);}
    ;

Modifiers
    : SHORT | LONG | UNSIGNED | SIGNED
    ;

Array_Notation
    : IDENTIFIER '[' ']'            {   
                                        char arrayType[100] = "Array: ";
                                        strcat(arrayType, datatype);
                                        Insert(symbol_table, $1, arrayType, yylineno, true);
                                    }
    | IDENTIFIER '[' Expression ']' {   
                                        char arrayType[100] = "Array: ";
                                        strcat(arrayType, datatype);
                                        Insert(symbol_table,$1, arrayType, yylineno, true);
                                    }
    | '*' IDENTIFIER '[' Expression ']' {   
                                        int len = strlen(datatype);
                                        datatype[len] = '*';
                                        datatype[len +1] = '\0';                                
                                        char arrayType[100] = "Array: ";
                                        strcat(arrayType, datatype);
                                        Insert(symbol_table,$2, arrayType,yylineno, true);
                                        datatype[len] = '\0';
                                    }
    | '&' IDENTIFIER '[' Expression ']' {
                                        char arrayType[100] = "Array: ";
                                        strcat(arrayType, datatype);
                                        Insert(symbol_table,$2, arrayType,yylineno, true);
                                    }
    ;



Define_Assign
    : IDENTIFIER Assignment_Operator Expression          {Insert(symbol_table,$1,datatype,yylineno, false);trace("Define_Assign Rule 1\n");}  
    | '*' IDENTIFIER Assignment_Operator Expression      {Insert(symbol_table,$2,datatype,yylineno, false);}
    | Array_Notation Assignment_Operator Expression                   
    ;

Param_List
    : Expression
    | Expression ',' Param_List
    | 
    ;

Assignment
    : IDENTIFIER Assignment_Operator Expression           {trace("Assignment Rule 1\n");}
    | '*' IDENTIFIER Assignment_Operator Expression         
    | Array_Notation Assignment_Operator Expression
    | Primary
    ;

Assignment_Operator
	: '='
    | ADD_ASSIGN
    | SUB_ASSIGN
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| LEFT_ASSIGN
	| RIGHT_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;


Expression
    : Logical_Expression
    ;

Logical_Expression
    : Relational_Expression
    | Logical_Expression LOGIC_AND Relational_Expression
    | Logical_Expression LOGIC_OR Relational_Expression
    | NOT Relational_Expression 
    ;

Relational_Expression
    : Additive_Expression
    | Relational_Expression GREATER_THAN Additive_Expression

    | Relational_Expression LESSER_THAN Additive_Expression
    | Relational_Expression GREATER_EQUAL Additive_Expression
    | Relational_Expression LESSER_EQUAL Additive_Expression
    | Relational_Expression DOUBLE_EQUAL Additive_Expression
    | Relational_Expression NOT_EQUAL Additive_Expression
    ;

Additive_Expression
    : Multiplicative_Expression
    | Additive_Expression '+' Multiplicative_Expression
    | Additive_Expression '-' Multiplicative_Expression
    ;

Multiplicative_Expression
    : Primary
    | Multiplicative_Expression '*' Primary
    | Multiplicative_Expression '/' Primary
    | Multiplicative_Expression '%' Primary
    ;

Primary
    : '(' Expression ')'
    | CONSTANT_INTEGER     {Insert(constant_table, $1, "int", yylineno, false); trace("CONSTANT_INTEGER\n");}
    | CONSTANT_FLOAT       {Insert(constant_table, $1, "float", yylineno, false); trace("CONSTANT_FLOAT\n");}
    | CONSTANT_CHAR        {Insert(constant_table, $1, "char", yylineno, false); trace("CONSTANT_CHAR\n");}
    | CONSTANT_STRING      {Insert(constant_table, $1, "string", yylineno, false); trace("CONSTANT_STRING\n");}
    | IDENTIFIER           {trace("Primary Identifier\n");}
    | '*' IDENTIFIER       {trace("Pointer Identifier\n");}
    | '&' IDENTIFIER       {trace("Address of Identifier\n");}
    | '-' Primary
    | '+' Primary
    | Array_Notation
    | Function_Call
    | INCREMENT_OPERATOR IDENTIFIER
    | IDENTIFIER INCREMENT_OPERATOR
    | DECREMENT_OPERATOR IDENTIFIER
    | IDENTIFIER DECREMENT_OPERATOR
    ;

Compound_Statement
    : '{' Statement_List '}'
	;

Statement_List
    : Statement Statement_List
    |
    ;

Statement
    : While_Statement 
    | Declaration   
    | For_Statement  
    | If_Statement  
    | Assignment    ';'
    | Return_Statement    
    | Do_While_Statement      
    | BREAK ';'
    | CONTINUE ';'                    
	| ';'
    ; 

Return_Statement
    : RETURN Expression ';'   {trace("Return_Statement Call\n");}
    ;

While_Statement
    : WHILE '(' Expression ')' Statement                                                        
    | WHILE '(' Expression ')' Compound_Statement
    ;

Do_While_Statement
    : DO Compound_Statement WHILE '(' Expression ')' ';'
    ;


For_Statement
    : FOR '(' Assignment ';' Expression ';' Assignment ')' Statement 
    | FOR '(' Assignment ';' Expression ';' Assignment ')' Compound_Statement 
    ;

If_Statement
    : IF '(' Expression ')' Statement Else_Statement     
    | IF '(' Expression ')' Compound_Statement Else_Statement
    ;

Else_Statement
    : ELSE Compound_Statement
    | ELSE Statement
    |
    ;

Function_Call
    : IDENTIFIER '(' Param_List ')'     {Insert(symbol_table, $1, "Function", yylineno, false);trace("Function Call\n");} 
    ;

Include_Statement
	: '#' INCLUDE LESSER_THAN IDENTIFIER GREATER_THAN
	| '#' INCLUDE LESSER_THAN IDENTIFIER '.' IDENTIFIER GREATER_THAN
	;

Include
	: Include_Statement
	;
Define 
    : Define_Statement
    ;
Define_Statement
    : '#' DEFINE IDENTIFIER IDENTIFIER
    | '#' DEFINE IDENTIFIER CONSTANT_INTEGER
    | '#' DEFINE IDENTIFIER CONSTANT_FLOAT
    ;


%%


inline void trace(char *s){
    if(TRACE_ENABLED)
        fprintf(stderr,"%-20.20s%20.20s%20d\n", s, yytext, yylineno, false);
}

int main()
{
    Initialize(symbol_table);
    Initialize(constant_table);

    if(!yyparse()){
        Display(symbol_table, "Symbol Table");
        Display(constant_table, "Constant Table");
        printf("\n\n Parsing complete  ✔ \n\n");    
    }
    else
        printf("\nParsing failed ✘ \n\n");
    
    Free(symbol_table);
    Free(constant_table);

    return 0;
}
         
void yyerror(const char *s) {
	printf("%d : %s %s\n", yylineno, s, yytext );
}