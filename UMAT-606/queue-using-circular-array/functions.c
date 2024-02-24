#include "queue.h"

Queue initQ(void){

  Queue Q = (Queue) malloc(sizeof(struct Q));

  if (Q) 
  {
    Q->cap = QSIZE;
    Q->data = (ElementType*) malloc(sizeof(ElementType)*Q->cap);
    if (!Q->data){
      printf("Out of Memory!\n");
      return NULL;
    }
    Q->F= Q->R = -1;
  }
  return Q;
}


ElementType isEmpty(Queue Q){
  return (Q->R == -1);
}

ElementType isFull(Queue Q){
  return ((Q->R + 1) % (Q->cap)) == Q->F;
}

void enqueue(Queue Q,ElementType X){
  if (isEmpty(Q)){
    Q->F = Q->R = 0;
    Q->data[Q->F] = X;
  }
  else if(!isFull(Q)){
    Q->R = (Q->R + 1) % (Q->cap);
    Q->data[Q->R] = X;
  } else /* isFull(Q) */ {
    printf("Q is Full!\n");
  }
}


ElementType dequeue(Queue Q){

  ElementType X;

  if (isEmpty(Q)){
    printf("Q is Empty!\n");
    return 0;
  } else {

    X = Q->data[Q->F];

    if (Q->F == Q->R)
      Q->F = Q->R = -1; // make Q empty
    else
      Q->F = (Q->F + 1) % (Q->cap);
  }

  return X;

}

void displayQ(Queue Q){

  printf("FRONT:");
  for(int i = Q->F; i != Q->R; i = (i + 1) % Q->cap)
    printf("%d\t",Q->data[i]);

  printf("%d:REAR\n", Q->data[Q->R]);
}
