#include "stackheader.h"

int main(){
  int stackSize = DEFAULT_STACK_SIZE;
  Stack S = createStack(stackSize);
  if(isEmpty(S))
    printf("Stack is Empty\n");

  Push(S, "Aum");
  printf("%2d. %s\n",S->top, Top(S));
  Push(S, "Sri");
  printf("%2d. %s\n",S->top, Top(S));
  Push(S, "Sai");
  printf("%2d. %s\n",S->top, Top(S));
  Push(S, "Ram");
  printf("%2d. %s\n",S->top, Top(S));
  Push(S, "Aum");
  printf("%2d. %s\n",S->top, Top(S));
  Push(S, "Sri");
  printf("%2d. %s\n",S->top, Top(S));
  Push(S, "Sai");
  printf("%2d. %s\n",S->top, Top(S));
  Push(S, "Ram");
  Push(S, "Aum");
  printf("%2d. %s\n",S->top, Top(S));
  Push(S, "Sri");
  printf("%2d. %s\n",S->top, Top(S));
  Push(S, "Sai");
  printf("%2d. %s\n",S->top, Top(S));
  Push(S, "Ram");
  printf("%2d. %s\n",S->top, Top(S));
  while(!isEmpty(S))
    printf("%2d. %s\n",S->top+1, TopAndPop(S));
  disposeStack(&S);
  printf("testing dispose\n");
  Push(S, "sairam");
  printf(" %s\n", Top(S));

}


