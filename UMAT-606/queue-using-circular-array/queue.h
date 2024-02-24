#include <stdio.h>
#include <stdlib.h>
#ifndef _QUEUE_

#define ElementType int
#define QSIZE 10

struct Q {
  int F, R, cap;
  ElementType* data;

};

typedef struct Q* Queue;

/*
 * Initialize an empty `Queue`
 */
Queue initQ(void);

/*
 * Return `true` if the Queue is empty 
 */
ElementType isEmpty(Queue);

/*
 * Return `true` if the Queue is full
 */
ElementType isFull(Queue);

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

