#include<stdbool.h>

#ifndef _SYMBOL_TABLE
#define _SYMBOL_TABLE
typedef struct symbol_node_struct sym_node;

struct symbol_node_struct {
  char *symbol;
  char *type;
  int line_number;

  // sym_node* left; // For binary tree based symbol table 
  sym_node *next;
};

#define MAX_SYMBOL_TABLE_SIZE 10
// const int MAX_SYMBOL_TABLE_SIZE = 10;

// Function Prototypes
void initial(sym_node **symbol_table);

void insert(sym_node **symbol_table, const char* symbol, const char *type, const int line_number);

bool find(sym_node **symbol_table, const char* symbol);

void Delete(sym_node **symbol_table);

void Display(sym_node **symbol_table, const char *table_name);

#endif