#include<stdbool.h>

#ifndef _SYMBOL_TABLE
#define _SYMBOL_TABLE
typedef struct symbol_node_struct symbol_node_t;

struct symbol_node_struct {
  char *symbol;
  char *type;
  int line_number;

  // symbol_node_t* left; // For binary tree based symbol table 
  symbol_node_t *next;
};

#define MAX_SYMBOL_TABLE_SIZE 10
// const int MAX_SYMBOL_TABLE_SIZE = 10;

// Function Prototypes
void initial(symbol_node_t **symbol_table);

void insert(symbol_node_t **symbol_table, const char* symbol, const char *type, const int line_number);

bool find(symbol_node_t **symbol_table, const char* symbol);

void Delete(symbol_node_t **symbol_table);

void Display(symbol_node_t **symbol_table, const char *table_name);

#endif