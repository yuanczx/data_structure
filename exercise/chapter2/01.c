#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

// delete the minimum value from list and replace it with the last element
int solution(int list[],int length){
  if (length <= 1) {
    printf("NULL");
    exit(1);
  }

  int i, min = INT32_MAX;
  for (i = 0; i<length; i++) {
    if (min > list[i]) {
      min = list[i];
    }
  }

  list[i] = list[length-1];
  return min;
}

int main(int argc, char *argv[])
{
  int list[] = {12,3,24,123,45,9,78,60,4,3,52,5,1,33,22};
  int a = solution(list, sizeof(list)/sizeof(int));
  printf("%d",a);
  return EXIT_SUCCESS;
}
