#include "header.h"

#define nullptr ((void *)0)

dLLNode *insertAfterPos(dLLNode *HEAD, int pos, char X){
  // create new node
  dLLNode *new = malloc(sizeof(dLLNode));
  new->data = X;
  new->left = nullptr;
  if (pos == 0){
    new->right = HEAD;
    return new;
  }
  pos -= 1;
  dLLNode *temp = HEAD;
  // traverse
  while(pos){
    temp = temp->right;
    pos-= 1;
    if (temp == nullptr){
      return HEAD;
    }
  } 

  new->right = temp->right;
  new->left = temp;
  temp->right = new;
  if(new->right)
    new->right->left = new;

  return HEAD;
}

dLLNode *create_list_from_string(char str[]) {
  dLLNode *head = (dLLNode *)malloc(sizeof(dLLNode));
  dLLNode *temp = head;
  while(*str != '\0'){
    temp->right = malloc(sizeof(dLLNode));
    temp->right->left = temp;
    temp = temp->right;
    temp->data = *str;
    str++;
  }
  temp->right = nullptr;
  temp = head->right;
  temp->left = nullptr;
  free(head);
  return temp;
}

void display_list(dLLNode *head)
{
  while (head)
  {
    printf("%c", head->data);
    head = head->right;
  }
  printf("\n");
}

dLLNode *delete_node(dLLNode *head, char node_data)
{
  dLLNode *NHead = malloc(sizeof(dLLNode));
  NHead->right = head;
  head->left = NHead;
  while(head){
    if(head->data == node_data){
      head->right->left = head->left;
      head->left->right = head->right;
      free(head);
    }
    head = head->right;
  }
  head = NHead->right;
  head->left = nullptr;
  free(NHead);
  return head;
}

int find_node(dLLNode *head, char node_data)
{
  int pos = 1;
  while(head){
    if(head->data == node_data)
      return pos;
    pos++;
    head = head->right;
  }
  return -1;
}

void delete_list(dLLNode *head){
  if (!head)
    return;
  while(head->right){
    head = head->right;
    free(head->left);
  }
  free(head);
  return;
}


// Node *create_list_from_string(char str[])
// {
//     Node *temp = nullptr, *N = nullptr;
//
//     Node *head = (Node *)malloc(sizeof(Node));
//     if (head) // create a head
//     {
//         head->data = *str;
//         head->next = nullptr;
//         str++; // increment to the next character
//     }
//
//     N = head;
//
//     while (*str != '\0')
//     {
//         temp = (Node *)malloc(sizeof(Node)); // create a new node
//         if (temp)                            // if node exists
//         {
//             temp->data = *str; // assign char to the node
//             temp->next = nullptr;
//         }
//         else
//         {
//             break; // break out in case mem allocation failed
//         }
//         head->next = temp; // connect head to the new node
//
//         head = head->next; // go to the next node
//         str++;             // iterate
//     }
//
//     return N;
// }
//
// void display_list(Node *head)
// {
//     while (head)
//     {
//         printf("%c", head->data);
//         head = head->next;
//     }
//     printf("\n");
// }
//
// Node *insert_at_beginning(Node *head, char input)
// {
//     Node *temp = (Node *)malloc(sizeof(Node));
//     if (temp)
//     {
//         temp->data = input;
//         temp->next = head;
//     }
//     else
//         return head;
//
//     return temp;
// }
//
// Node *insert_at_end(Node *head, char input)
// {
//     Node *N = head;
//     Node *temp = (Node *)malloc(sizeof(Node));
//     if (temp)
//     {
//       temp->data = input;
//       temp->next = nullptr;
//
//       if (!head)  // head is nullptr
//         return temp;
//
//       while(head->next) // move to tail
//         head = head->next;
//       
//       head->next = temp;
//
//     }
//     return N; // return the original head
// }
//
// Node *user_input(){
//   Node *HEAD = nullptr;
//   int n;
//   char x;
//   printf("Enter number of nodes: ");
//   scanf("%d",&n);
//   for(int i = 0; i < n; i++){
//     printf("[%2d] ",i);
//     scanf(" %c", &x);
//     HEAD = insert_at_end(HEAD, x);
//   }
//   return HEAD;
// }
//
// Node *insert_after_node(Node *head, char node_data, int pos)
// {
//     Node *N = head;
//     int c = 1;
//     Node *temp = (Node *)malloc(sizeof(Node));
//     if (temp)
//         temp->data = node_data;
//     else
//         return head;
//
//     if (pos == 0)
//     {
//         if (head)
//         {
//             temp->next = head;
//         }
//         else
//         {
//             temp->next = nullptr;
//         }
//         return temp;
//     }
//
//     while (c < pos && head)
//     {
//         c++;
//         head = head->next;
//     }
//     if (c == pos)
//     {
//         temp->next = head->next;
//         head->next = temp;
//     }
//     return N;
// }
//
// Node *delete_node(Node *head, char node_data)
// {
//     Node *prev = nullptr, *curr = head;
//     while (curr)
//     {
//         // sairam
//         if (curr->data == node_data)
//         {
//             if (curr == head)
//                 head = head->next;
//             else
//                 prev->next = curr->next;
//             free(curr);
//             break;
//         }
//         else
//         {
//             prev = curr;
//             curr = curr->next;
//             // prev = prev->next; // prev was nullptr before so it won't work
//         }
//     }
//     return head;
// }
//
// Node *_insert_ascending_recr(Node *HEAD, Node *TEMP){
//
//   if (HEAD == nullptr || HEAD->data > TEMP->data)
//     // if HEAD is null or greater than TEMP then let TEMP point to HEAD
//     {
//     TEMP->next = HEAD;
//     return TEMP;
//     }
//   else
//     {
//     HEAD->next = _insert_ascending_recr(HEAD->next, TEMP);
//     return HEAD;
//     }
//
// }
//
// Node *insert_ascending(Node *HEAD, char X){
//   Node *TEMP = (Node*) malloc(sizeof(Node));
//   // allocate memory for the node
//   if (TEMP){
//     TEMP-> data = X;
//     // initiate recursion 
//     return _insert_ascending_recr(HEAD, TEMP);
//   }
//   return HEAD;
//
// }
//
// Node *trim(Node *HEAD){
//   Node *t = HEAD;
//   if (HEAD){
//     t = HEAD->next;
//     free(HEAD);
//   }
//   return t;
// }
//
// Node *swap(Node *HEAD){
//   char temp;
//   if (HEAD && HEAD->next){
//     temp = HEAD->data;
//     HEAD->data = HEAD->next->data;
//     HEAD->next->data = temp;
//   }
//   return HEAD;
// }
//
// Node *swap_adjacent_nodes(Node *HEAD){
//   Node *N = HEAD;
//   while(HEAD && HEAD->next){
//     HEAD = swap(HEAD); 
//     HEAD = HEAD->next->next;
//   }
//   return N;
// }
//
// Node *reverse_list(Node *HEAD){
//   Node *a = nullptr;
//   Node *b = HEAD;
//   Node *c = HEAD ? HEAD->next : nullptr;
//
//   printf("\n%c-%c\n",b->data, c->data);
//
//   while(c){
//
//     printf("\n%c-%c\n",b->data, c->data);
//     b->next = a;
//     a = b;
//     b = c;
//     c = c->next;
//   }
//   b -> next = a; // wow, the power of tracing
//
//   return b;
// }
//
// Node *union_list(Node *HEAD1, Node *HEAD2){
//   Node *HEAD_NEW = (Node *)malloc(sizeof(Node));  // keep it fixed (NULL val)
//   Node *temp = HEAD_NEW;  // work on this
//
//   while(HEAD1 && HEAD2){
//     temp->next = (Node *)malloc(sizeof(Node));  // create a new node
//     temp = temp->next;
//     if (HEAD1->data == HEAD2->data){ // increase both
//       temp->data = HEAD1->data;
//       HEAD1= HEAD1->next;
//       HEAD2= HEAD2->next;
//     }
//     else if (HEAD1->data < HEAD2->data){ // increase 1
//       temp->data = HEAD1->data;
//       HEAD1= HEAD1->next;
//     }
//     else // HEAD1->data > HEAD2->data // increase 2
//     {
//       temp->data = HEAD2->data;
//       HEAD2= HEAD2->next;
//     } 
//   }
//   Node *HEAD = HEAD1 ? HEAD1 : HEAD2;
//   while (HEAD){
//     temp->next = (Node *)malloc(sizeof(Node)); 
//     temp = temp->next;
//     temp->data = HEAD->data;
//     HEAD = HEAD->next;
//   }
//
//   temp = HEAD_NEW->next;
//   free(HEAD_NEW);
//   return(temp);
// }
//
// Node *intersection_list(Node *HEAD1, Node *HEAD2){
//   Node *HEAD_NEW = (Node *)malloc(sizeof(Node));  // keep it fixed (NULL val)
//   Node *temp = HEAD_NEW;  // work on this
//
//   while(HEAD1 && HEAD2){
//     temp->next = (Node *)malloc(sizeof(Node));  // create a new node
//     temp = temp->next;
//     if (HEAD1->data == HEAD2->data){ // increase both
//       temp->data = HEAD1->data;
//       HEAD1= HEAD1->next;
//       HEAD2= HEAD2->next;
//     }
//     else if (HEAD1->data < HEAD2->data) // increase 1
//       HEAD1= HEAD1->next;
//     else // HEAD1->data > HEAD2->data // increase 2
//       HEAD2= HEAD2->next;
//   }
//   temp = HEAD_NEW->next;
//   free(HEAD_NEW);
//   return(temp);
// }
//
//
// Node *concat_list(Node *HEAD1, Node *HEAD2){
//   Node *HEAD_NEW = (Node *)malloc(sizeof(Node));  // keep it fixed (NULL val)
//   Node *temp = HEAD_NEW;  // work on this
//
//   while(HEAD1){
//     temp->next = malloc(sizeof(Node));
//     temp= temp->next;
//     temp->data = HEAD1->data;
//     HEAD1 = HEAD1->next;
//   }
//   while(HEAD2){
//     temp->next = malloc(sizeof(Node));
//     temp= temp->next;
//     temp->data = HEAD2->data;
//     HEAD2 = HEAD2->next;
//   }
//
//   temp = HEAD_NEW->next;
//   free(HEAD_NEW);
//   return temp;
// }
