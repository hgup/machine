#ifndef _standard_h
  #define _standard_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#endif
#ifndef _stack_h
  #define _stack_h
  
#define STRING_SIZE 100
#define DEFAULT_STACK_SIZE 10
#define ElementDataType char
#define ElementType char*
#define ElementArray ElementType*
struct Node {
  int size;
  int top;
  ElementArray data;
};
typedef struct Node* PtrToNode;
typedef PtrToNode Stack;

/*
 * creates and returns a dummy variable based `Stack`
 */
Stack createStack(int size);

/*
 * returns `true` if the stack is empty
 */
int isEmpty(Stack);

/*
 * returns `true` if the stack is full
 */
int isFull(Stack);

/*
 * pushes an element to the `Top` of the `Stack`
 */
void Push(Stack, ElementType);

/*
 * returns the element at the `Top` of the `Stack`
 */
ElementType Top(Stack);

/*
 * removes the element from the `Top` of the `Stack` and updates the `Top`
 */
void Pop(Stack);

/*
 * remove and returns the element from the `Top` of the `Stack` and updates the `Top`
 */
ElementType TopAndPop(Stack);

/*
 * empties the `Stack` and frees up all nodes except `dummy`
 */
void makeEmpty(Stack);

/*
 * empties the `Stack` and frees up all nodes including the `dummy`
 */
void disposeStack(Stack*);

#endif
