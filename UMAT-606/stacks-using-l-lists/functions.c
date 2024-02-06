#include "stackheader.h"

int _hasIssue(Stack S){
  if (!S){
    printf("Received faulty Stack, no dummy variable present\n");
    return 1;
  } 
  return 0;
}

Stack createStack(){
  Stack S = (Stack)malloc(sizeof(struct Node));
  if (!S) {
    printf("Ran out of Memory\n");
    return NULL;
  }
  else {

    S->top = NULL;
    S->data = NULL; // garbage

    return S; // returned dummy
  }
};

int isEmpty(Stack S){
  if (_hasIssue(S)) return 0;
  return (S->top == NULL);
};

// NA
// int isFull(Stack S){
//   if (_hasIssue(S)) return 0;
//   return (S->top == NULL);
// };

void Push(Stack S, ElementType X){
  if (_hasIssue(S)) return;

  PtrToNode N = (PtrToNode)malloc(sizeof(struct Node));
  N->data = (ElementType)malloc(sizeof(ElementDataType) * STRING_SIZE);
  strcpy(N->data, X);

  N->top = S->top;
  S->top = N;
}

ElementType Top(Stack S){
  if (_hasIssue(S)) return NULL;
  return S->top->data;
}

void Pop(Stack S){
  if (_hasIssue(S)) return;
  PtrToNode N = S->top->top;
  free(S->top);
  S->top = N;
}

ElementType TopAndPop(Stack S){
  if (_hasIssue(S)) return NULL;
  ElementType X = S->top->data;
  Pop(S);
  return X;
}


void makeEmpty(Stack S){
  if (_hasIssue(S)) return;
  while(!isEmpty(S)){
   Pop(S);
  }
};


void disposeStack(Stack* S){
  if (_hasIssue(*S)) return;
  makeEmpty(*S);
  free(*S);
  *S = NULL;
};
