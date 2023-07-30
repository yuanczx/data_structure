#include <stdlib.h>
#include <stdio.h>

// delete values between s and t, s < t
int solution(int list[],int s, int t, int length){
  if (s>=t || length <= 0) exit(1);
  for (int i = 0; i<length; i++) {
    if (list[i]>=s && list[i]<=t) {
      list[i--] = list[--length];
    }
  }
  return length;
}

int main(int argc, char *argv[])
{
  int list[] = {1,2,13,20,3,14,5,16,7,8,9,10,72,5,23,5,213,5};
  int length = sizeof(list)/sizeof(int);
  printf("length: %d\n",length);
  length = solution(list, 10,20, length);
  printf("length: %d\n",length);
  for (int i = 0; i<length; i++) { 
    printf("%d, ",list[i]);
  }
  return EXIT_SUCCESS;
}
