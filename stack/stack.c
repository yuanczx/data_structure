#include "stack.h"
#include <stdlib.h>
#include <string.h>
#define POINTER_SIZE 8

Stack *InitStack(size_t data_size, int capacity) {
  Stack *stack = malloc(sizeof(Stack));
  stack->data = malloc(capacity * POINTER_SIZE);
  stack->data_size = data_size;
  stack->capacity = capacity;
  stack->top = -1;
  return stack;
}

int Push(Stack *stack, void *data) {
  if (stack->top == stack->capacity - 1)
    return 0;
  stack->data[++stack->top] = malloc(stack->data_size);
  memcpy(stack->data[stack->top], data, stack->data_size);
  return 1;
}

int Pop(Stack *stack, void *data) {
  if (stack->top < 0)
    return 0;
  memcpy(data, stack->data[stack->top], stack->data_size);
  free(stack->data[stack->top--]);
  return 1;
}

int FreeStack(Stack *stack) {
  while (stack->top >= 0) {
    free(stack->data[stack->top--]);
  }
  free(stack);
  return 1;
}
