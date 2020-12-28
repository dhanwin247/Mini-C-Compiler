#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "sym_table.h"

void initial(sym_node **symbol_table){

   for(int i=0; i< MAX_SYMBOL_TABLE_SIZE; ++i){
      symbol_table[i] = NULL;
   }
}

sym_node *create_symbol_node(const char* symbol, const char *type, const int line_number){

   sym_node *node = malloc(sizeof(sym_node));
   node->symbol = malloc(sizeof(char) * (strlen(symbol) +1));
   strcpy(node->symbol, symbol);
   // node->symbol = (char*)symbol;
   node->type = (char*)type;
   node->line_number = line_number;
   node->next = NULL;

   return node;
}

int hash(const char *symbol){
   return ((int)symbol[0]) % MAX_SYMBOL_TABLE_SIZE;
}

void insert(sym_node **symbol_table, const char* symbol, const char *type, const int line_number){
   if(find(symbol_table, symbol))
      return;

   int hash_index = hash(symbol);
   sym_node *node = create_symbol_node(symbol, type, line_number);

   sym_node *curr = symbol_table[hash_index];
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

bool find(sym_node **symbol_table, const char* symbol){

   int hash_index = hash(symbol);
   for(sym_node *curr = symbol_table[hash_index]; curr != NULL; curr = curr->next){
      // Symbol found in table
      if(!strcmp(curr->symbol, symbol)){
         return true;
      }
   }

   // Symbol not found in table
   return false;
}

void Delete(sym_node **symbol_table){

   for(int i=0; i< MAX_SYMBOL_TABLE_SIZE; ++i){
      free(symbol_table[i]);
   }
}

void Display(sym_node **symbol_table, const char *table_name){
   printf("\n\n");
   printf("%s\t\n", table_name);

   printf("|\t%-20s" "|\t%-20s" "|\t%-20s|" "\n", "Symbol", "Type", "Line Number");

   for(int i=0; i< MAX_SYMBOL_TABLE_SIZE; ++i){
      for(sym_node *curr = symbol_table[i]; curr != NULL; curr = curr->next){
         printf("|\t%-20s" "|\t%-20s |\t%-20d|" "\n", curr->symbol, curr->type, curr->line_number);
      }
   }
   printf("\n\n");
}