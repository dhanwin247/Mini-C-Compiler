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
symbol_node_t *keyword_table[MAX_NODES];
symbol_node_t *special_table[MAX_NODES];
symbol_node_t *operator_table[MAX_NODES];

extern char *yytext;
extern int yylineno;
extern int nest_level;

char datatype[100];
char paramList[100];
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
    :  Type Identifier_List ';'             {Insert(special_table, ';', "Semicolon", yylineno, 0, "", nest_level);}
    ;

Identifier_List
    : Array_Notation
    | IDENTIFIER ',' Identifier_List        {Insert(symbol_table,$1,datatype,yylineno, 0, "", nest_level);Insert(special_table,',',datatype,yylineno, 0, "", nest_level);}
    | '*' IDENTIFIER ',' Identifier_List    {
                                                int len = strlen(datatype);
                                                datatype[len] = '*';
                                                datatype[len +1] = '\0';
                                                Insert(symbol_table,$2,datatype,yylineno, 0, "", nest_level);
                                                Insert(operator_table, '*', "Pointer", yylineno, 0, "", nest_level);
                                                Insert(special_table, ',', "Comma", yylineno, 0, "", nest_level);
                                                datatype[len] = '\0';
                                            }
    | Array_Notation ',' Identifier_List    {Insert(special_table, ',', "Comma", yylineno, 0, "", nest_level);}
    | IDENTIFIER                            {Insert(symbol_table,$1,datatype,yylineno, 0, "", nest_level);} 
    | '*' IDENTIFIER                        {
                                                int len = strlen(datatype);
                                                datatype[len] = '*';
                                                datatype[len +1] = '\0';
                                                Insert(symbol_table,$2,datatype,yylineno, 0, "", nest_level);
                                                Insert(operator_table, '*', "Pointer", yylineno, 0, "", nest_level);
                                                datatype[len] = '\0';
                                            }
    | Define_Assign ',' Identifier_List     {Insert(special_table, ',', "Comma", yylineno, 0, "", nest_level);}
    | Define_Assign 
    ;

Function_Definition
	: Type IDENTIFIER '(' Formal_Param_List ')' Compound_Statement      {                            
                                                                            char funcType[100] = "Function: ";
                                                                            strcat(funcType, datatype);
                                                                            Insert(special_table, '(', "Open Parantheses", yylineno, 0, "", nest_level);
                                                                            Insert(special_table, ')', "Open Parantheses", yylineno, 0, "", nest_level);
                                                                            Insert(symbol_table,$2, funcType, yylineno, 0, "", nest_level);
                                                                        }
	;

Formal_Param_List
	: Type IDENTIFIER                                  {Insert(symbol_table,$2,datatype,yylineno, 0, "Params", nest_level);trace("Formal_Param_List Rule 1\n");}
	| Type '*' IDENTIFIER                              {Insert(operator_table, '*', "Pointer", yylineno, 0, "", nest_level);Insert(symbol_table,$3,datatype,yylineno, 0, "Params", nest_level);trace("Formal_Param_List Rule 2\n");}
	| Type Array_Notation                              {trace("Formal_Param_List Rule 3\n");}
	| Type IDENTIFIER ',' Formal_Param_List            {Insert(special_table, ',', "Comma", yylineno, 0, "", nest_level);Insert(symbol_table,$2,datatype,yylineno, 0, "Params", nest_level);trace("Formal_Param_List Rule 4\n");}
	| Type '*' IDENTIFIER ',' Formal_Param_List        {Insert(special_table, ',', "Comma", yylineno, 0, "", nest_level);Insert(operator_table, '*', "Pointer", yylineno, 0, "", nest_level);Insert(symbol_table,$3,datatype,yylineno, 0, "Params", nest_level);trace("Formal_Param_List Rule 5\n");}
	| Type Array_Notation ',' Formal_Param_List        {Insert(special_table, ',', "Comma", yylineno, 0, "", nest_level);trace("Formal_Param_List Rule 6\n");}
	|
	;

Type
    : INT                       {strcpy(datatype, $1);Insert(keyword_table, "INT", "Keyword", yylineno, 0, "", nest_level);}
    | FLOAT                     {strcpy(datatype, $1);Insert(keyword_table, "FLOAT", "Keyword", yylineno, 0, "", nest_level);}
    | VOID                      {strcpy(datatype, $1);Insert(keyword_table, "VOID", "Keyword", yylineno, 0, "", nest_level);}
    | CHAR                      {strcpy(datatype, $1);Insert(keyword_table, "CHAR", "Keyword", yylineno, 0, "", nest_level);}
    | DOUBLE                    {strcpy(datatype, $1);Insert(keyword_table, "DOUBLE", "Keyword", yylineno, 0, "", nest_level);}
    | Modifiers INT             {strcpy(datatype, $2);Insert(keyword_table, "INT", "Keyword", yylineno, 0, "", nest_level);}
    | Modifiers FLOAT           {strcpy(datatype, $2);Insert(keyword_table, "FLOAT", "Keyword", yylineno, 0, "", nest_level);}
    | Modifiers DOUBLE          {strcpy(datatype, $2);Insert(keyword_table, "DOUBLE", "Keyword", yylineno, 0, "", nest_level);}
    | Modifiers CHAR            {strcpy(datatype, $2);Insert(keyword_table, "CHAR", "Keyword", yylineno, 0, "", nest_level);}

Modifiers
    : SHORT | LONG | UNSIGNED | SIGNED
    ;

Array_Notation
    : IDENTIFIER '[' ']'            {   
                                        char arrayType[100] = "Array: ";
                                        strcat(arrayType, datatype);
                                        Insert(symbol_table, $1, arrayType, yylineno, 1, "", nest_level);
                                        Insert(special_table, '[', "Open Square Bracket", yylineno, 0, "", nest_level);
                                        Insert(special_table, ']', "Closed Square Bracket", yylineno, 0, "", nest_level);
                                    }
    | IDENTIFIER '[' Expression ']' {   
                                        char arrayType[100] = "Array: ";
                                        strcat(arrayType, datatype);
                                        Insert(symbol_table,$1, arrayType, yylineno, 1, "", nest_level);
                                    }
    | '*' IDENTIFIER '[' Expression ']' {   
                                        int len = strlen(datatype);
                                        datatype[len] = '*';
                                        datatype[len +1] = '\0';                                
                                        char arrayType[100] = "Array: ";
                                        strcat(arrayType, datatype);
                                        Insert(symbol_table,$2, arrayType,yylineno, 1, "", nest_level);
                                        Insert(special_table, '[', "Open Square Bracket", yylineno, 0, "", nest_level);
                                        Insert(special_table, ']', "Closed Square Bracket", yylineno, 0, "", nest_level);
                                        Insert(operator_table, '*', "Pointer", yylineno, 0, "", nest_level);
                                        datatype[len] = '\0';
                                    }
    | '&' IDENTIFIER '[' Expression ']' {
                                        char arrayType[100] = "Array: ";
                                        strcat(arrayType, datatype);
                                        Insert(symbol_table,$2, arrayType,yylineno, 1, "", nest_level);
                                        Insert(special_table, '[', "Open Square Bracket", yylineno, 0, "", nest_level);
                                        Insert(special_table, ']', "Closed Square Bracket", yylineno, 0, "", nest_level);
                                        Insert(operator_table, '&', "Address Of", yylineno, 0, "", nest_level);
                                    }
    | IDENTIFIER '[' ']' '[' ']'    {   
                                        char arrayType[100] = "Array: ";
                                        strcat(arrayType, datatype);
                                        Insert(symbol_table, $1, arrayType, yylineno, 2, "", nest_level);
                                        Insert(special_table, '[', "Open Square Bracket", yylineno, 0, "", nest_level);
                                        Insert(special_table, ']', "Closed Square Bracket", yylineno, 0, "", nest_level);
                                        Insert(special_table, '[', "Open Square Bracket", yylineno, 0, "", nest_level);
                                        Insert(special_table, ']', "Closed Square Bracket", yylineno, 0, "", nest_level);
                                    }
    | IDENTIFIER '[' Expression ']' '[' Expression ']' {   
                                        char arrayType[100] = "Array: ";
                                        strcat(arrayType, datatype);
                                        Insert(symbol_table,$1, arrayType, yylineno, 2, "", nest_level);
                                    }
    | '*' IDENTIFIER '[' Expression ']' '[' Expression ']' {   
                                        int len = strlen(datatype);
                                        datatype[len] = '*';
                                        datatype[len +1] = '\0';                                
                                        char arrayType[100] = "Array: ";
                                        strcat(arrayType, datatype);
                                        Insert(symbol_table,$2, arrayType,yylineno, 2, "", nest_level);
                                        Insert(special_table, '[', "Open Square Bracket", yylineno, 0, "", nest_level);
                                        Insert(special_table, ']', "Closed Square Bracket", yylineno, 0, "", nest_level);
                                        Insert(special_table, '[', "Open Square Bracket", yylineno, 0, "", nest_level);
                                        Insert(special_table, ']', "Closed Square Bracket", yylineno, 0, "", nest_level);
                                        Insert(operator_table, '*', "Pointer", yylineno, 0, "", nest_level);
                                        datatype[len] = '\0';
                                    }
    | '&' IDENTIFIER '[' Expression ']' '[' Expression ']' {
                                        char arrayType[100] = "Array: ";
                                        strcat(arrayType, datatype);
                                        Insert(symbol_table,$2, arrayType,yylineno, 2, "", nest_level);
                                        Insert(special_table, '[', "Open Square Bracket", yylineno, 0, "", nest_level);
                                        Insert(special_table, ']', "Closed Square Bracket", yylineno, 0, "", nest_level);
                                        Insert(special_table, '[', "Open Square Bracket", yylineno, 0, "", nest_level);
                                        Insert(special_table, ']', "Closed Square Bracket", yylineno, 0, "", nest_level);
                                        Insert(operator_table, '&', "Address Of", yylineno, 0, "", nest_level);
                                    }
    ;



Define_Assign
    : IDENTIFIER Assignment_Operator Expression          {Insert(symbol_table,$1,datatype,yylineno, 0, "", nest_level);trace("Define_Assign Rule 1\n");}  
    | '*' IDENTIFIER Assignment_Operator Expression      {Insert(operator_table, '*', "Pointer", yylineno, 0, "", nest_level);Insert(symbol_table,$2,datatype,yylineno, 0, "", nest_level);}
    | Array_Notation Assignment_Operator Expression                   
    ;

Param_List
    : Expression
    | Expression ',' Param_List                         {Insert(special_table, ',', "Comma", yylineno, 0, "", nest_level);}
    | 
    ;

Assignment
    : IDENTIFIER Assignment_Operator Expression           {trace("Assignment Rule 1\n");}
    | '*' IDENTIFIER Assignment_Operator Expression       {Insert(operator_table, '*', "Pointer", yylineno, 0, "", nest_level);}
    | Array_Notation Assignment_Operator Expression
    | Primary
    ;

Assignment_Operator
	: '='                                                  {Insert(operator_table, "=", "Assign", yylineno, 0, "", nest_level);}
    | ADD_ASSIGN                                           {Insert(operator_table, "+=", "Add Assign", yylineno, 0, "", nest_level);}
    | SUB_ASSIGN                                           {Insert(operator_table, "-=", "Subtract Assign", yylineno, 0, "", nest_level);}
	| MUL_ASSIGN                                           {Insert(operator_table, "*=", "Mult Assign", yylineno, 0, "", nest_level);} 
	| DIV_ASSIGN                                           {Insert(operator_table, "/=", "Divide Assign", yylineno, 0, "", nest_level);}
	| MOD_ASSIGN                                           {Insert(operator_table, "%=", "Modulus Assign", yylineno, 0, "", nest_level);}
	| LEFT_ASSIGN                                          {Insert(operator_table, "<<=", "Left Shift Assign", yylineno, 0, "", nest_level);}
	| RIGHT_ASSIGN                                         {Insert(operator_table, ">>=", "Right Shift Assign", yylineno, 0, "", nest_level);}
	| AND_ASSIGN                                           {Insert(operator_table, "&=", "And Assign", yylineno, 0, "", nest_level);}
	| XOR_ASSIGN                                           {Insert(operator_table, "^=", "Xor Assign", yylineno, 0, "", nest_level);}
	| OR_ASSIGN                                            {Insert(operator_table, "|=", "Or Assign", yylineno, 0, "", nest_level);}
	;


Expression
    : Logical_Expression
    ;

Logical_Expression
    : Relational_Expression
    | Logical_Expression LOGIC_AND Relational_Expression    {Insert(operator_table, "&&", "Logical And", yylineno, 0, "", nest_level);}
    | Logical_Expression LOGIC_OR Relational_Expression     {Insert(operator_table, "||", "Logical Or", yylineno, 0, "", nest_level);}
    | NOT Relational_Expression 
    ;

Relational_Expression
    : Additive_Expression
    | Relational_Expression GREATER_THAN Additive_Expression {Insert(operator_table, '>', "Greater Than", yylineno, 0, "", nest_level);}

    | Relational_Expression LESSER_THAN Additive_Expression {Insert(operator_table, '<', "Less Than", yylineno, 0, "", nest_level);}
    | Relational_Expression GREATER_EQUAL Additive_Expression {Insert(operator_table, ">=", "Greater Equal", yylineno, 0, "", nest_level);}
    | Relational_Expression LESSER_EQUAL Additive_Expression {Insert(operator_table, "<=", "Less Equal", yylineno, 0, "", nest_level);}
    | Relational_Expression DOUBLE_EQUAL Additive_Expression {Insert(operator_table, "==", "Equal", yylineno, 0, "", nest_level);}
    | Relational_Expression NOT_EQUAL Additive_Expression {Insert(operator_table, "!=", "Not Equal", yylineno, 0, "", nest_level);}
    ;

Additive_Expression
    : Multiplicative_Expression
    | Additive_Expression '+' Multiplicative_Expression {Insert(operator_table, '+', "Add", yylineno, 0, "", nest_level);}
    | Additive_Expression '-' Multiplicative_Expression {Insert(operator_table, '-', "Subtract", yylineno, 0, "", nest_level);}
    ;

Multiplicative_Expression
    : Primary
    | Multiplicative_Expression '*' Primary {Insert(operator_table, '*', "Multiply", yylineno, 0, "", nest_level);}
    | Multiplicative_Expression '/' Primary {Insert(operator_table, '/', "Divide", yylineno, 0, "", nest_level);}
    | Multiplicative_Expression '%' Primary {Insert(operator_table, '%', "Modulus", yylineno, 0, "", nest_level);}
    ;

Primary
    : '(' Expression ')'   {Insert(special_table, '(', "Open Parantheses", yylineno, 0, "", nest_level);Insert(operator_table, ')', "Closed Parantheses", yylineno, 0, "", nest_level);}
    | CONSTANT_INTEGER     {Insert(constant_table, $1, "int", yylineno, 0, "", nest_level); trace("CONSTANT_INTEGER\n");}
    | CONSTANT_FLOAT       {Insert(constant_table, $1, "float", yylineno, 0, "", nest_level); trace("CONSTANT_FLOAT\n");}
    | CONSTANT_CHAR        {Insert(constant_table, $1, "char", yylineno, 0, "", nest_level); trace("CONSTANT_CHAR\n");}
    | CONSTANT_STRING      {Insert(constant_table, $1, "string", yylineno, 0, "", nest_level); trace("CONSTANT_STRING\n");}
    | IDENTIFIER           {trace("Primary Identifier\n");}
    | '*' IDENTIFIER       {Insert(operator_table, '*', "Pointer", yylineno, 0, "", nest_level);trace("Pointer Identifier\n");}
    | '&' IDENTIFIER       {Insert(operator_table, '&', "Address of", yylineno, 0, "", nest_level);trace("Address of Identifier\n");}
    | '-' Primary          {Insert(operator_table, '-', "Sign Positive", yylineno, 0, "", nest_level);}
    | '+' Primary          {Insert(operator_table, '+', "Sign Negative", yylineno, 0, "", nest_level);}
    | Array_Notation
    | Function_Call
    | INCREMENT_OPERATOR IDENTIFIER
    | IDENTIFIER INCREMENT_OPERATOR
    | DECREMENT_OPERATOR IDENTIFIER
    | IDENTIFIER DECREMENT_OPERATOR
    ;

Compound_Statement
    : '{' Statement_List '}'    {Insert(operator_table, '}', "Closed Curly", yylineno, 0, "", nest_level);Insert(operator_table, '{', "Open Curly", yylineno, 0, "", nest_level);}
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
    | Assignment    ';'         {Insert(special_table, ';', "Semicolon", yylineno, 0, "", nest_level);}
    | Return_Statement    
    | Do_While_Statement      
    | BREAK ';'                 {Insert(special_table, ';', "Semicolon", yylineno, 0, "", nest_level);}
    | CONTINUE ';'              {Insert(special_table, ';', "Semicolon", yylineno, 0, "", nest_level);} 
	| ';'                       {Insert(special_table, ';', "Semicolon", yylineno, 0, "", nest_level);}
    ; 

Return_Statement
    : RETURN Expression ';'   {Insert(special_table, ';', "Semicolon", yylineno, 0, "", nest_level);trace("Return_Statement Call\n");}
    ;

While_Statement
    : WHILE '(' Expression ')' Statement            {Insert(special_table, '(', "Open Parantheses", yylineno, 0, "", nest_level); Insert(special_table, ')', "Closed Parantheses", yylineno, 0, "", nest_level);}                                    
    | WHILE '(' Expression ')' Compound_Statement   {Insert(special_table, '(', "Open Parantheses", yylineno, 0, "", nest_level); Insert(special_table, ')', "Closed Parantheses", yylineno, 0, "", nest_level);}
    ;

Do_While_Statement
    : DO Compound_Statement WHILE '(' Expression ')' ';' {Insert(special_table, '(', "Open Parantheses", yylineno, 0, "", nest_level); Insert(special_table, ')', "Closed Parantheses", yylineno, 0, "", nest_level);Insert(special_table, ';', "Semicolon", yylineno, 0, "", nest_level);}
    ;


For_Statement
    : FOR '(' Assignment ';' Expression ';' Assignment ')' Statement            {Insert(special_table, '(', "Open Parantheses", yylineno, 0, "", nest_level); Insert(special_table, ')', "Closed Parantheses", yylineno, 0, "", nest_level);Insert(special_table, ';', "Semicolon", yylineno, 0, "", nest_level);Insert(special_table, ';', "Semicolon", yylineno, 0, "", nest_level);}
    | FOR '(' Assignment ';' Expression ';' Assignment ')' Compound_Statement   {Insert(special_table, '(', "Open Parantheses", yylineno, 0, "", nest_level); Insert(special_table, ')', "Closed Parantheses", yylineno, 0, "", nest_level);Insert(special_table, ';', "Semicolon", yylineno, 0, "", nest_level);Insert(special_table, ';', "Semicolon", yylineno, 0, "", nest_level);}
    ;

If_Statement
    : IF '(' Expression ')' Statement Else_Statement            {Insert(special_table, '(', "Open Parantheses", yylineno, 0, "", nest_level); Insert(special_table, ')', "Closed Parantheses", yylineno, 0, "", nest_level);} 
    | IF '(' Expression ')' Compound_Statement Else_Statement   {Insert(special_table, '(', "Open Parantheses", yylineno, 0, "", nest_level); Insert(special_table, ')', "Closed Parantheses", yylineno, 0, "", nest_level);} 
    ;

Else_Statement
    : ELSE Compound_Statement
    | ELSE Statement
    |
    ;

Function_Call
    : IDENTIFIER '(' Param_List ')'     {Insert(special_table, '(', "Open Parantheses", yylineno, 0, "", nest_level); Insert(special_table, ')', "Closed Parantheses", yylineno, 0, "", nest_level);Insert(symbol_table, $1, "Function", yylineno, 0, "", nest_level);trace("Function Call\n");} 
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
        fprintf(stderr,"%-20.20s%20.20s%20d\n", s, yytext, yylineno);
}

int main()
{
    Initialize(symbol_table);
    Initialize(constant_table);
    Initialize(operator_table);
    Initialize(keyword_table);
    Initialize(special_table);

    if(!yyparse()){
        Display(symbol_table, "Symbol Table");
        Display(constant_table, "Constant Table");
        Display(operator_table, "Operator Table");
        Display(special_table, "Special Char Table");
        Display(keyword_table, "Keyword Table");
        printf("\n\n Parsing complete  ✔ \n\n");    
    }
    else
        printf("\nParsing failed ✘ \n\n");
    
    Free(symbol_table);
    Free(constant_table);
    Free(special_table);    
    Free(keyword_table);
    Free(operator_table);

    return 0;
}
         
void yyerror(const char *s) {
	printf("%d : %s %s\n", yylineno, s, yytext );
}