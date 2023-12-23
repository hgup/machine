#include "main.h"

Node *create_list_from_string(char str[])
{
    Node *temp = nullptr, *N = nullptr;

    Node *head = (Node *)malloc(sizeof(Node));
    if (head) // create a head
    {
        head->data = *str;
        head->next = nullptr;
        str++; // increment to the next character
    }

    N = head;

    while (*str != '\0')
    {
        temp = (Node *)malloc(sizeof(Node)); // create a new node
        if (temp)                            // if node exists
        {
            temp->data = *str; // assign char to the node
            temp->next = nullptr;
        }
        else
        {
            break; // break out in case mem allocation failed
        }
        head->next = temp; // connect head to the new node

        head = head->next; // go to the next node
        str++;             // iterate
    }

    return N;
}

void display_list(Node *head)
{
    while (head)
    {
        printf("%c", head->data);
        head = head->next;
    }
    printf("\n");
}

Node *insert_at_beginning(Node *head, char input)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    if (temp)
    {
        temp->data = input;
        temp->next = head;
    }
    else
        return head;

    return temp;
}

Node *insert_at_end(Node *head, char input)
{
    Node *N = head;
    Node *temp = (Node *)malloc(sizeof(Node));
    if (temp)
    {
      temp->data = input;
      temp->next = nullptr;

      if (!head)  // head is nullptr
        return temp;

      while(head->next) // move to tail
        head = head->next;
      
      head->next = temp;

    }
    return N; // return the original head
}

Node *user_input(){
  Node *HEAD = nullptr;
  int n;
  char x;
  printf("Enter number of nodes: ");
  scanf("%d",&n);
  for(int i = 0; i < n; i++){
    printf("[%2d] ",i);
    scanf(" %c", &x);
    HEAD = insert_at_end(HEAD, x);
  }
  return HEAD;
}

Node *insert_after_node(Node *head, char node_data, int pos)
{
    Node *N = head;
    int c = 1;
    Node *temp = (Node *)malloc(sizeof(Node));
    if (temp)
        temp->data = node_data;
    else
        return head;

    if (pos == 0)
    {
        if (head)
        {
            temp->next = head;
        }
        else
        {
            temp->next = nullptr;
        }
        return temp;
    }

    while (c < pos && head)
    {
        c++;
        head = head->next;
    }
    if (c == pos)
    {
        temp->next = head->next;
        head->next = temp;
    }
    return N;
}

Node *delete_node(Node *head, char node_data)
{
    Node *prev = nullptr, *curr = head;
    while (curr)
    {
        // sairam
        if (curr->data == node_data)
        {
            if (curr == head)
                head = head->next;
            else
                prev->next = curr->next;
            free(curr);
            break;
        }
        else
        {
            prev = curr;
            curr = curr->next;
            // prev = prev->next; // prev was nullptr before so it won't work
        }
    }
    return head;
}

Node *_insert_ascending_recr(Node *HEAD, Node *TEMP){

  if (HEAD == nullptr || HEAD->data > TEMP->data)
    // if HEAD is null or greater than TEMP then let TEMP point to HEAD
    {
    TEMP->next = HEAD;
    return TEMP;
    }
  else
    {
    HEAD->next = _insert_ascending_recr(HEAD->next, TEMP);
    return HEAD;
    }

}

Node *insert_ascending(Node *HEAD, char X){
  Node *TEMP = (Node*) malloc(sizeof(Node));
  // allocate memory for the node
  if (TEMP){
    TEMP-> data = X;
    // initiate recursion 
    return _insert_ascending_recr(HEAD, TEMP);
  }
  return HEAD;

}

Node *trim(Node *HEAD){
  Node *t = HEAD;
  if (HEAD){
    t = HEAD->next;
    free(HEAD);
  }
  return t;
}

Node *swap(Node *HEAD){
  char temp;
  if (HEAD && HEAD->next){
    temp = HEAD->data;
    HEAD->data = HEAD->next->data;
    HEAD->next->data = temp;
  }
  return HEAD;
}

Node *swap_adjacent_nodes(Node *HEAD){
  Node *N = HEAD;
  while(HEAD && HEAD->next){
    HEAD = swap(HEAD); 
    HEAD = HEAD->next->next;
  }
  return N;
}

Node *reverse_list(Node *HEAD){
  Node *a = nullptr;
  Node *b = HEAD;
  Node *c = HEAD ? HEAD->next : nullptr;

  printf("\n%c-%c\n",b->data, c->data);

  while(c){

    printf("\n%c-%c\n",b->data, c->data);
    b->next = a;
    a = b;
    b = c;
    c = c->next;
  }
  b -> next = a; // wow, the power of tracing

  return b;
}
