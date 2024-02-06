#include <stdio.h>
#include <stdlib.h>
typedef struct dllnode {
  char data;
  struct dllnode *left;
  struct dllnode *right;
} dLLNode;

dLLNode *create_list_from_string(char str[]);
void display_list(dLLNode *head);
dLLNode *insertAfterPos(dLLNode *HEAD, int pos, char X);
dLLNode *delete_node(dLLNode *HEAD, char X);
int find_node(dLLNode *HEAD, char X);
void delete_list(dLLNode *head);
