#include <stdlib.h>
#include <stdio.h>

int solution(int list[], int length){
  if (length <=0 ) exit(1);
  int i, j=0;
  for (i = 1; i<length; ++i) {
    if (list[i] == list[i-1]) continue;
    list[++j] = list[i];
  }
  return length-(i-j-1);
}

int main(int argc, char *argv[])
{

  int list[] = {1,2,2,2,2,2,3,3,3,3,4,4,5,5,6};
  int length = sizeof(list)/sizeof(list[0]);
  printf("length: %d\n",length);
  length = solution(list, length);
  printf("length: %d\n",length);
  for (int i = 0; i<length; i++) { 
    printf("%d, ",list[i]);
  }
  return EXIT_SUCCESS;
}
