#include "stack.h"
#include <stdbool.h>


int reverse_polish(char* polish, size_t size, char* reverse_polish)
{
  Stack *stack = InitStack(sizeof(char), size);
  int j = 0;
  char op,temp;

  for (int i = 0; i< size - 1; i++) {
    op = polish[i];
    temp = 0;
    if (op == '(') Push(stack, &op); // left bracket
    else if (op == ')') {
      while (reverse_polish[j-1] != '(') { 
        Pop(stack, &reverse_polish[j++]);
      }
      reverse_polish[j--] = 0;
    }
    // pop the higher level operator then push the operator
    else if (op == '+'||op == '-'||op == '*'||op == '/') {
      while (true) {
        if (!GetTop(stack, &temp)) break;
        if(temp == '/' || temp == '*' || 
          ((temp == '+' || temp == '-') && (op == '+' || op == '-'))) {
            Pop(stack, &reverse_polish[j++]);
        }else break;
      }
      Push(stack, &op);
    }
    else reverse_polish[j++] = op; // if no an operator add to reverse_polish
  }

  while (stack->top >= 0) Pop(stack, &reverse_polish[j++]);

  return 1;
}
