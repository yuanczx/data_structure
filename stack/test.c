#include "stack.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
  typedef struct {
    int x;
    int y;
  } Point;

  int capacity = 10;
  Stack *stack = InitStack(sizeof(Point), capacity);
  Point p;
  for (int i = 0; i < capacity; i++) {
    p.x = i;
    p.y = i * 10;
    Push(stack, &p);
  }

  for (int j = 0; j < capacity; j++) {
    Pop(stack, &p);
    printf("x: %d, y: %d\n", p.x, p.y);
  }
  return 1;
}
