#include "stackheader.h"

int _hasIssue(Stack S){
  if (!S){
    printf("Received faulty Stack\n");
    return 1;
  } 
  return 0;
}

Stack createStack(int size){
  Stack S = (Stack)malloc(sizeof(struct Node));
  if (!S) {
    printf("Ran out of Memory\n");
    return NULL;
  }
  else {

    S->size = size;
    S->top = -1;
    S->data = (ElementArray)malloc(sizeof(ElementType)*size);

    for (int i = 0; i < S->size; i++){
      S->data[i] = (ElementType)malloc(sizeof(ElementDataType)*STRING_SIZE);
      if(!S->data[i]){
        printf("Ran out of Memory");
        return S;
      }
    }
    return S; // returned dummy
  }
};

int isEmpty(Stack S){
  if (_hasIssue(S)) return 0;
  return (S->top == -1);
};

int isFull(Stack S){
  if (_hasIssue(S)) return 0;
  return (S->top == S->size - 1);
};

void Push(Stack S, ElementType X){
  if (_hasIssue(S)) return;
  if (!isFull(S))
    S->data[++S->top] = X;
  else
    printf("Stack is Full!\n");
}

ElementType Top(Stack S){
  if (_hasIssue(S)) return NULL;
  return S->data[S->top];
}

void Pop(Stack S){
  if (_hasIssue(S)) return;
  S->top--;
}

ElementType TopAndPop(Stack S){
  if (_hasIssue(S)) return NULL;
  return(S->data[S->top--]);
}


void makeEmpty(Stack S){
  if (_hasIssue(S)) return;
  S->top = -1;
};


// void disposeStack(Stack S){
//   if (_hasIssue(S)) return;
//   for(int i = 0; i < S->top; i++){
//     free(S->data[i]);
//   }
//   free(S);
// };

void disposeStack(Stack *S){
  if (_hasIssue(*S)) return;
  for(int i = 0; i < (*S)->top; i++){
    free((*S)->data[i]);
  }
  free(*S);
  *S = NULL;
};
