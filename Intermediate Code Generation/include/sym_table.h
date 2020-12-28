#include<stdbool.h>

#ifndef _SYMBOL_TABLE
#define _SYMBOL_TABLE
typedef struct symbol_node_struct symbol_node_t;

struct symbol_node_struct {
  char *symbol;
  char *type;
  char *arr_size;
  int scope_num;
  int line_number;
  bool is_function_defined;
  int num_params;

  // symbol_node_t* left; // For binary tree based symbol table 
  symbol_node_t *next;
};

#define MAX_SYMBOL_TABLE_SIZE 10
// const int MAX_SYMBOL_TABLE_SIZE = 10;

// Function Prototypes
void symTabInit(symbol_node_t **symbol_table);

int Hash(const char *symbol);

symbol_node_t * symTabInsert(symbol_node_t **symbol_table, const char* symbol, const int scope_num, const char *type, const char *arr_size, const int line_number);

symbol_node_t *symTabFind(symbol_node_t **symbol_table, const char* symbol);

void symTabFree(symbol_node_t **symbol_table);

void Display(symbol_node_t **symbol_table, const char *table_name);



#endif