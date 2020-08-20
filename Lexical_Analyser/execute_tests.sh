DIRECTORY='outputs/'

if [ -d "$DIRECTORY" ]; then
    rm -rf "$DIRECTORY"
fi
mkdir "$DIRECTORY"

lex -l lex_main.l && gcc lex.yy.c include/sym_table.c -lfl -o lex_main.out

for testcase in $(ls testcases); do
    TEMP_OUTPUT="$DIRECTORY$testcase"

    ./lex_main.out < testcases/$testcase > $TEMP_OUTPUT
    if [ $1 ]; then
        printf "===============================================\n\n\n"
        printf "Scanning $testcase ↓\n"
        cat $TEMP_OUTPUT
    fi

    FILTERED_OUTPUT='sed -r "s/\x1B\[([0-9]{1,2}(;[0-9]{1,2})?)?[m|K]//g" $TEMP_OUTPUT'
    FINAL_OUTPUT="${TEMP_OUTPUT%.*}.tokens"
    eval $FILTERED_OUTPUT > $FINAL_OUTPUT
    rm $TEMP_OUTPUT

    printf "$testcase scanned. ✔ \n"
done