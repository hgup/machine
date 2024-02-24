#include "queue.h"

Queue initQ(void){

  Queue Q = (Queue) malloc(sizeof(struct Q));

  if (Q) 
    Q->R = Q->F = NULL;
  else 
    printf("Out of Memory! Failed to create Queue");

  return Q;
}


ElementType isEmpty(Queue Q){
  return (Q->R == NULL);
}


void enqueue(Queue Q,ElementType X){
  Node n = (Node) malloc(sizeof(struct node));
  if (n){
    n->data = X;
    n->next = n->prev = 0;
  } else{
    printf("Out of Memory! Failed to create node");
    return;
  }

  if (isEmpty(Q)){
    Q->F = Q->R = n;
  } else {
    Q->R->prev = n;
    n->next = Q->R;
    Q->R = n;
  }
}


ElementType dequeue(Queue Q){

  Node n;
  ElementType X;

  if (isEmpty(Q)){
    printf("Q is Empty");
    return 0;
  }
    n = Q->F;
    X = n->data;
    
    Q->F = Q->F->prev;
    
  if (Q->F != NULL){
  // printf("Q->F: %d , Q->R:%d\n",Q->F->data, Q->R->data);
    Q->F->next = NULL;
  } else /* == NULL */
    Q->F = Q->R = NULL;

  free(n);
  return X;
}

void displayQ(Queue Q){
  Node temp = Q->F;

  printf("FRONT:\t");
  while(temp){
    printf("%d\t",temp->data);
    temp = temp->prev;
  }
  printf(":REAR\n");
}
