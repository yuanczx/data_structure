#include <stdlib.h>
#include <stdio.h>

// delete values equal x 
int solution(int list[],int x,int length){
  for (int i = 0; i<length; i++) {
    if (list[i] == x) {
      list[i--] = list[--length];
    }
  }
  return length;
}

int main(int argc, char *argv[])
{
  int list[] = {1,2,3,4,5,6,7,8,9,10,72,5,23,5,213,5};
  int length = sizeof(list)/sizeof(int);
  printf("length: %d\n",length);
  length = solution(list, 5, length);
  printf("length: %d\n",length);
  for (int i = 0; i<length; i++) { 
    printf("%d, ",list[i]);
  }
  return EXIT_SUCCESS;
}
