#include <stdlib.h>
#include <stdio.h>

// delete values between s and t(s < t) in ordered list
int solution(int list[],int s, int t, int length){
  if (s>=t || length <= 0) exit(1);
  int start = -1, end;

  for (int i = 0; i<length; i++) {
    if (list[i] <= s || list[i] >= t) continue;
    else {
      if (start == -1) {start = i;}
      end = i;
    }
  }

  for (int i = end+1; i<length; i++) {
    list[start++] = list[i];
  }
  length -= (end+1-start);
  return length;
}

int main(int argc, char *argv[])
{
  int list[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
  int length = sizeof(list)/sizeof(int);
  printf("length: %d\n",length);
  length = solution(list, 10,20, length);
  printf("length: %d\n",length);
  for (int i = 0; i<length; i++) { 
    printf("%d, ",list[i]);
  }
  return EXIT_SUCCESS;
}
