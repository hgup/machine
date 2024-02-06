#include "stackheader.h"

int main(){
  Stack S = createStack();
  if(isEmpty(S))
    printf("Stack is Empty\n");

  Push(S, "1ena");
  printf("%s\n",Top(S));
  Push(S, "2ena");
  printf("%s\n",Top(S));
  Push(S, "3ena");
  printf("%s\n",Top(S));
  Push(S, "4ena");
  printf("%s\n",Top(S));
  while(!isEmpty(S))
    printf("%s\n",TopAndPop(S));
  disposeStack(&S);
  printf("testing dispose\n");
  Push(S, "sairam");
  printf("%s\n", Top(S));


}


