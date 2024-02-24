#include "queue.h"

int main(){
  Queue Q = initQ();
  enqueue(Q, 12);
  enqueue(Q, 13);
  enqueue(Q, 15);
  enqueue(Q, 18);
  enqueue(Q, 19);
  displayQ(Q);
  while(!isEmpty(Q))
    printf("%d\n",dequeue(Q));
  printf("\n");
}
