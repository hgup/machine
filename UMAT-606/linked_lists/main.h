#include <stdlib.h>
#include <stdio.h>

#define nullptr ((void *)0)

typedef struct node
{
    char data;
    struct node *next;
} Node;

Node *create_list_from_string(char str[]);
void display_list(Node *head);
Node *insert_at_beginning(Node *head, char input);
Node *insert_after_node(Node *head, char node_data, int position);
Node *delete_node(Node *head, char node_data);
