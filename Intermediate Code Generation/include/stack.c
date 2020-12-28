#include "stack.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

extern bool BUFFER_ENABLED;

stack *stackInit(){
    stack *st = (stack *)malloc(sizeof(stack));
    assert(st != NULL);

    st->top = -1;
    st->temp_count = 0;

    return st;
}

void stackFree(stack *st){
    free(st);
}

stack_node stackPop(stack *st) {
    
    if(st->top == -1){
        printf("Tried popping from Empty Stack\n");
        exit(-2);
    }

    if(st->stack_arr[st->top].temp_num != -1)
        st->temp_count--;
    return st->stack_arr[st->top--];
}

void stackPush(stack *st, const char *var_name){

    if(st->top >= STACK_CAPACITY){
        printf("Stack Overflow");
        exit(-2);
    }
    
    st->top++;
    strcpy(st->stack_arr[st->top].var_name, var_name);
    st->stack_arr[st->top].temp_num = 0;

    if(!strcmp(var_name, TEMP_VAR)){
        st->stack_arr[st->top].temp_num = st->temp_count;
        st->temp_count++;
        char buff[STACK_VAR_LENGTH];
        sprintf(buff, "%d", st->stack_arr[st->top].temp_num);
        strcat(st->stack_arr[st->top].var_name, buff);
    }
    else
        st->stack_arr[st->top].temp_num = -1;
}

void stackTop(stack *st, TAC_buffer_node *buf){

    if(st->top == -1) {
        printf("Stack is Empty");
        exit(-2);
    }
    if(BUFFER_ENABLED)
        strcat(buf->code, st->stack_arr[st->top].var_name);
    else 
        printf("%s", st->stack_arr[st->top].var_name);       
}


TAC_code_stack *codeStackInit() {

    TAC_code_stack *st = malloc(sizeof(TAC_code_stack));
    st->top = 0;
    for(int i=0; i<BUFFER_STACK_CAPACITY; i++)
        st->stack_arr[i] = NULL;
    return st;
}

TAC_buffer_node *get_new_node(TAC_code_stack *st) {

    TAC_buffer_node *temp = malloc(sizeof(TAC_buffer_node));
    temp->next = st->stack_arr[st->top];
    st->stack_arr[st->top] = temp;
    strcpy(temp->code, "");
    return temp;
}

void recursive_print(TAC_buffer_node *node) {

    if(node == NULL)
        return;
    recursive_print(node->next);
    printf("%s", node->code);
}

void displayTAC(TAC_code_stack *st) {

    recursive_print(st->stack_arr[st->top]);
}