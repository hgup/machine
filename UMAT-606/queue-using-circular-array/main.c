#include "queue.h"

int main(){
  Queue Q = initQ();
  enqueue(Q, 1);
  enqueue(Q, 2);
  enqueue(Q, 3);
  enqueue(Q, 4);
  enqueue(Q, 5);
  enqueue(Q, 7);
  enqueue(Q, 9);
  enqueue(Q, 11);
  enqueue(Q, 13);
  enqueue(Q, 15);
  enqueue(Q, 17);
  enqueue(Q, 17);
  displayQ(Q);
  while(!isEmpty(Q))
    printf("%d\n",dequeue(Q));
  printf("\n");
}
