#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "sym_table.h"


void Initialize(symbol_node_t **symbol_table){
   for(int i = 0; i < MAX_SYMBOL_TABLE_SIZE; ++i)
      symbol_table[i] = NULL;
}

int Hash(const char *symbol){
   return ((int)symbol[0]) % MAX_SYMBOL_TABLE_SIZE;
}

symbol_node_t *Create_Node(const char* symbol, const char *type, const int line_number){
   symbol_node_t *node = malloc(sizeof(symbol_node_t));
   node->symbol = malloc(sizeof(char) * (strlen(symbol) +1));
   node->type = malloc(sizeof(char) * (strlen(type) +1));
   strcpy(node->symbol, symbol);
   strcpy(node->type, type);
   node->line_number = line_number;
   node->array_dim = 0;
   node->next = NULL;

   return node;
}

void Insert(symbol_node_t **symbol_table, const char* symbol, const char *type, const int line_number, int arrayDim, const char* paramList, int nestLevel){
   if(Find(symbol_table, symbol))
      return;

   int hash_index = Hash(symbol);
   symbol_node_t *node = Create_Node(symbol, type, line_number); 
   node->array_dim = arrayDim;
   node->paramList = paramList;
   node->nestLevel = nestLevel;

   symbol_node_t *curr = symbol_table[hash_index];
   while(curr != NULL && curr->next != NULL){
      curr = curr->next;
   }
   // Add as first item
   if(curr == NULL){
      symbol_table[hash_index] = node;
   }
   else{
      curr->next= node;
   }
}

bool Find(symbol_node_t **symbol_table, const char* symbol){

   int hash_index = Hash(symbol);
   for(symbol_node_t *curr = symbol_table[hash_index]; curr != NULL; curr = curr->next){
      // Symbol found in table
      if(!strcmp(curr->symbol, symbol)){
         return true;
      }
   }

   // Symbol not found in table
   return false;
}

void Free(symbol_node_t **symbol_table){

   for(int i=0; i< MAX_SYMBOL_TABLE_SIZE; ++i){
      free(symbol_table[i]);
   }
}

void Display(symbol_node_t **symbol_table, const char *table_name){
   printf("%s\t\n", table_name);

   printf("|\t%-20.20s" "|\t%-20.20s" "|\t%-20.20s|" "|\t%-20.20s|" "|\t%-20.20s|" "|\t%-20.20s|" "\n", "Symbol", "Type", "Line Number", "Array Dimensions", "Parameter Lists", "Nest Level");

   for(int i=0; i< MAX_SYMBOL_TABLE_SIZE; ++i){
      for(symbol_node_t *curr = symbol_table[i]; curr != NULL; curr = curr->next){
         printf("|\t%-20.20s" "|\t%-20.20s|\t%-20d|\t%-20d|\t%-20.20s|\t%-20d|" "\n", curr->symbol, curr->type, curr->line_number, curr->array_dim, curr->paramList, curr->nestLevel);
      }
   }
}