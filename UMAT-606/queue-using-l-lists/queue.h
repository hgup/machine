#include <stdio.h>
#include <stdlib.h>
#ifndef _QUEUE_

#define ElementType int

struct node {
  ElementType data;
  struct node *next, *prev;
};

struct Q {
  struct node* F;
  struct node* R;
};

typedef struct Q* Queue;
typedef struct node* Node;

/*
 * Initialize an empty `Queue`
 */
Queue initQ(void);

/*
 * Return `true` if the Queue is empty 
 */
ElementType isEmpty(Queue);

/*
 * enqueue an element to the rear of the Queue
 */
void enqueue(Queue,ElementType);

/*
 * depqueue an element from the front of the Queue
 */
ElementType dequeue(Queue);

/*
 * display all elements of the queue
 */
void displayQ(Queue);

#endif // !_QUEUE_

