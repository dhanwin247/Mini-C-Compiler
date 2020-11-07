#ifndef _STACK
#define _STACK

#define STACK_VAR_LENGTH 100
#define STACK_CAPACITY 100
#define TEMP_VAR "t"
#define BUFFER_STACK_CAPACITY 100

typedef struct stack_node stack_node;
typedef struct stack stack;
typedef struct TAC_buffer_node TAC_buffer_node;
typedef struct TAC_code_stack TAC_code_stack;

struct stack_node {
    int temp_num; // -1 if it isn't a temporary variable
    char var_name[STACK_VAR_LENGTH];
};

struct stack {
    int top;
    int temp_count;
    stack_node stack_arr[STACK_CAPACITY];
};

struct TAC_buffer_node {
    char code[STACK_VAR_LENGTH];
    struct TAC_buffer_node *next;
};

struct TAC_code_stack {
    int top;
    TAC_buffer_node *stack_arr[BUFFER_STACK_CAPACITY];
};

stack *stackInit();
void stackFree(stack *st);
stack_node stackPop(stack *st);
void stackTop(stack *st, TAC_buffer_node *buf);
void stackPush(stack *st, const char *var_name);

TAC_code_stack *codeStackInit();
TAC_buffer_node *get_new_node(TAC_code_stack *st);
void displayTAC(TAC_code_stack *st);

#endif