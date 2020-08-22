/* 
* Lexical Analyser for C language
* Team : Sai Krishna Anand, Suhas K S, Arnav Santosh Nair, Dhanwin Rao
*
* To run : source execute_tests.sh
*/

/* Declaration section */
%option noyywrap
%option yylineno

/* Auxiliary declarations*/
%{
   #include "include/sym_table.h"
   
   #define MAX_NODES 1000

   sym_node *symbol_table[MAX_NODES];
   sym_node *constant_table[MAX_NODES];

   void disp(char *info, char *token, int line_number);
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
    disp("Preprocessor Directive", yytext, yylineno); 
}

"#define"[ ]+(_|{letter})({alphanum})*[ ]*(.)+   {
    disp("Preprocessor Directive", yytext, yylineno);
}

"["    { disp("Special Character", yytext, yylineno); }

"]"    { disp("Special Character", yytext, yylineno); }

"("    { disp("Special Character", yytext, yylineno); }

")"    { disp("Special Character", yytext, yylineno); }

"{"    { disp("Special Character", yytext, yylineno); }

"}"    { disp("Special Character", yytext, yylineno); }

","    { disp("Special Character", yytext, yylineno); }

";"    { disp("Special Character", yytext, yylineno); }

"//".*                                       { 
    disp("Single Line Comment", yytext, yylineno); 
}

("/*")(([^*]*[*]+[^*/])*([^*]*[*]+[/]))      { 
    disp("Multi-line Comment", yytext, yylineno); 
}

("/*")(([^*]*([*]+[^/])*)*)*                 { 
    disp("Error! Multi-line comment is not closed", yytext, yylineno); 
}

("\"")[^\n\"]*                               { 
    disp("Error! String is unclosed", yytext, yylineno); 
}

("\'")(((("\\")[^0abfnrtv\\\"\'][^\n\']*))|[^\n\''][^\n\'']+)("\'") { 
    disp("Error! Not a character", yytext, yylineno); 
}

{keyword}/[ ]*[(]?                           { 
    disp("Keyword", yytext, yylineno); 
}

#include[/"<][ ]*{letter}{letter}*\.h[/">]   {
    disp("Header", yytext, yylineno);                                                 
}

{operator}                                   { 
    disp("Operator", yytext, yylineno); 
}

{function}                                   { 
    disp("Identifier", yytext, yylineno);
    insert(symbol_table, yytext, "Function", yylineno);
}

("\'")(("\\"({escape_sequences}))|.)("\'")   { 
    disp("Identifier", yytext, yylineno); 
    insert(constant_table, yytext, "Character", yylineno);
}

(_|{letter})({alphanum}|_)*                  { 
    disp("Identifier", yytext, yylineno);
    insert(symbol_table, yytext, "Identifier", yylineno);
}

"-"?{digit}+                                 { 
    disp("Literal", yytext, yylineno);
    insert(constant_table, yytext, "Integer", yylineno);
}

"-"?{digit}+\.({digit}+)?                    { 
    disp("Literal", yytext, yylineno); 
    insert(constant_table, yytext, "Float", yylineno);
}

("\"")[^\n\"]*("\"")                         { 
    disp("Literal", yytext, yylineno); 
    insert(constant_table, yytext, "String", yylineno);
}

%%

void disp(char *info, char *token, int line_number){
   printf("%-30s%-30s%-30d\n", info, token, line_number);
}

/* User Subroutines */
int main()
{
   printf("\n");
   printf("\t\t\tLexical Analyser for C language\n");
   printf("\n");

   printf("%-30s%-30s%-30s\n", "Token Type", "Token Value", "Line Number");

   yylex();

   Display(symbol_table, "Symbol Table");
   Display(constant_table, "Constant Table");

   return 0;
}
