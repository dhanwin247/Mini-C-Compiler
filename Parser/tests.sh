DIRECTORY='outputs/'

if [ -d "$DIRECTORY" ]; then
    rm -rf "$DIRECTORY"
fi
mkdir "$DIRECTORY"

yacc -d parser.y
lex lex_p.l

gcc lex.yy.c y.tab.c include/sym_table.c -w -lm -o parser.out 

for testcase in $(ls tests); do
    TEMP_OUTPUT="$DIRECTORY$testcase"

    ./parser.out < tests/$testcase > $TEMP_OUTPUT
    if [ $1 ]; then
        printf "===============================================\n\n\n"
        printf "Parsing $testcase ↓\n"
        cat $TEMP_OUTPUT
    fi

    FILTERED_OUTPUT='sed -r "s/\x1B\[([0-9]{1,2}(;[0-9]{1,2})?)?[m|K]//g" $TEMP_OUTPUT'
    FINAL_OUTPUT="${TEMP_OUTPUT%.*}.parse"
    eval $FILTERED_OUTPUT > $FINAL_OUTPUT
    rm $TEMP_OUTPUT

    printf "$testcase parsed. ✔ \n"
done