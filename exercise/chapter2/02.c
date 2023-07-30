#include <stdlib.h>
#include <stdio.h>

// reverse the list
void solution(int list[], int length){
  int temp;
  for (int i = 0; i<length/2; i++) {
    temp = list[i];
    list[i] = list[length-1-i];
    list[length-1-i] = temp;
  }
}

int main(int argc, char *argv[])
{
  int list[] = {1,2,3,4,5,6,7,8,9,10,11};
  int length = sizeof(list)/sizeof(int);
  solution(list, length);
  for (int i = 0; i<length; i++) {
    printf("%d, ",list[i]);
  }
  return EXIT_SUCCESS;
}
