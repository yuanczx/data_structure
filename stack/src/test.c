#include "stack.h"
#include <stdio.h>
#include <reverse_polish.h>

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

  char polish[] = "1+(2+3)/4*(1*2+9*8)/2";
  char rp[sizeof(polish)];
  reverse_polish(polish, sizeof(polish), rp);
  printf("%s\n",rp);
  return 1;
}
