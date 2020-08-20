lex -l lex_main.l && gcc lex.yy.c include/sym_table.c -lfl -o lex_main.out
if [ $1 ]; then
    ./lex_main.out < $1
else
    ./lex_main.out
fi