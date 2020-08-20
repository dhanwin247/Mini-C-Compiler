/* 
* Lexical Analyser for C language
* Team : Sai Krishna Anand, Suhas K S, Arnav Santosh, Nair, Dhanwin Rao
*
* Usage: ./run.sh or ./runtests.sh
*/

/* Declaration section */
%option noyywrap
%option yylineno

/* Auxiliary declarations*/
%{
   #include "include/sym_table.h"
   
   #define MAX_NODES 1000

   symbol_node_t *symbol_table[MAX_NODES];
   symbol_node_t *constant_table[MAX_NODES];

   void print_token(char *info, char *token, int line_number);
%}

/* Regular definitions */
digit               [0-9]
letter              [a-zA-Z]
alphanum            {letter}|{digit}
keyword             char|int|main|float|double|short|long|unsigned|signed|main|while|for|break|if|else|continue|return|void|struct
operator            "+"|"-"|"++"|"--"|"!"|"~"|"*"|"/"|"%"|">>"|"<<"|"&"|"^"|\||\|\||"="|">"|"<"|">="|"<="|"=="|"!="
function            ((_|{letter})({alphanum}|_)*)/[ ]*[(]
escape_sequences    0|a|b|f|n|r|t|v|"\\"|"\""|"\'"

/* Pattern Matching Rules */
%%
\n                                           {}             
" "                                          {}

"#include"[ ]*"<"{letter}({alphanum})*".h>"   { 
    print_token("Preprocessor Directive", yytext, yylineno); 
}

"#define"[ ]+(_|{letter})({alphanum})*[ ]*(.)+   {
    print_token("Preprocessor Directive", yytext, yylineno);
}

"//".*                                       { 
    print_token("Single Line Comment", yytext, yylineno); 
}
("/*")(([^*]*[*]+[^*/])*([^*]*[*]+[/]))      { 
    print_token("Multi Line Comment", yytext, yylineno); 
}

("/*")(([^*]*([*]+[^/])*)*)*                 { 
    print_token("Error: Multi Line Comment Not Closed", yytext, yylineno); 
}

("\"")[^\n\"]*("\"")                         { 
    print_token("String", yytext, yylineno); 
    symbol_table_insert(constant_table, yytext, "String", yylineno);
}

("\"")[^\n\"]*                               { 
    print_token("Error: Unclosed String", yytext, yylineno); 
    }

("\'")(("\\"({escape_sequences}))|.)("\'")   { 
    print_token("Character", yytext, yylineno); 
    symbol_table_insert(constant_table, yytext, "Character", yylineno);
}

("\'")(((("\\")[^0abfnrtv\\\"\'][^\n\']*))|[^\n\''][^\n\'']+)("\'") { 
    print_token("Error: Not a Character", yytext, yylineno); 
}

{keyword}/[ ]*[(]?                           { 
    print_token("Keyword", yytext, yylineno); 
}

#include[/"<][ ]*{letter}{letter}*\.h[/">]   {
    print_token("Header", yytext, yylineno);                                                 
}

{operator}                                   { 
    print_token("Operator", yytext, yylineno); 
}

{function}                                   { 
    print_token("Function", yytext, yylineno);
    // int i=0;
    // for(i=0; yytext[i]!='\0' && yytext[i] !='('; ++i);
    // yytext[i] ='\0';
    symbol_table_insert(symbol_table, yytext, "Function", yylineno);
}

(_|{letter})({alphanum}|_)*                  { 
    print_token("Identifier", yytext, yylineno);
    symbol_table_insert(symbol_table, yytext, "Identfier", yylineno);
}

"-"?{digit}+                                 { 
    print_token("Integer", yytext, yylineno);
    symbol_table_insert(constant_table, yytext, "Integer", yylineno);
}

"-"?{digit}+\.({digit}+)?                    { 
    print_token("Floating Point", yytext, yylineno); 
    symbol_table_insert(constant_table, yytext, "Floating point", yylineno);
}

"["                                          { print_token("Left Bracket", yytext, yylineno); }

"]"                                          { print_token("Right Bracket", yytext, yylineno); }

"("                                          { print_token("Left Parantheses", yytext, yylineno); }

")"                                          { print_token("Right Parantheses", yytext, yylineno); }

"{"                                          { print_token("Left Brace", yytext, yylineno); }

"}"                                          { print_token("Right Brace", yytext, yylineno); }

","                                          { print_token("Comma", yytext, yylineno); }

";"                                          { print_token("Semicolon", yytext, yylineno); }

%%

void print_token(char *info, char *token, int line_number){
   printf("%-30s%-30s%-30d\n", info, token, line_number);
}

/* User SubRoutines */
int main()
{
   
   printf("\n");
   printf("\t\t\tLexical Analyser for C language\n");
   printf("\n");

   printf("%-30s%-30s%-30s\n", "Token Type", "Token Value", "Line Number");

   yylex();

   symbol_table_print(symbol_table, "Symbol Table");
   symbol_table_print(constant_table, "Constant Table");

   return 0;
}