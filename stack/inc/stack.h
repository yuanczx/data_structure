#ifndef STACK_H
#define STACK_H

#include <stdlib.h>

typedef struct {
  void **data;
  int top;
  int capacity;
  int data_size;
} Stack;

Stack *InitStack(size_t data_size, int capacity);
int Push(Stack *stack, void *data);
int Pop(Stack *stack, void *data);
int FreeStack(Stack *stack);
int GetTop(Stack *stack,void *data);

#endif
