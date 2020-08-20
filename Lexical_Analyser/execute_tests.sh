#!/bin/bash
# Usage ./runtests.sh for redirecting outputs to file,
# and with an argument to print on commandline as well

# Delete existing outputs directory and create a new one
DIRECTORY='outputs/'

if [ -d "$DIRECTORY" ]; then
    rm -rf "$DIRECTORY"
fi

mkdir "$DIRECTORY"

# Execute commands to compile lexical analyzer
lex -l lex_main.l && gcc lex.yy.c include/sym_table.c -lfl -o lex_mm.out

# Tokenizing all tests
for testcase in $(ls tests); do
    TEMP_OUTPUT="$DIRECTORY$testcase"
    FINAL_OUTPUT="${TEMP_OUTPUT%.*}.tokens"

    ./lex_mm.out < tests/$testcase > $FINAL_OUTPUT
    if [ $1 ]; then
        printf "===============================================\n\n\n"
        printf "Scanning $testcase ↓\n"
        cat $FINAL_OUTPUT
    fi

    printf "$testcase scanned.\n"
done
