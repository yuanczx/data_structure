#include <stdlib.h>
#include <stdio.h>

// reverse the list
void reverse(int list[], int from, int to){
  int temp;
  for (int i = 0; i<(to-from+1)/2; i++) {
    temp = list[from+i];
    list[from+i] = list[to-i];
    list[to-i] = temp;
  }
}

void solution(int list[], int p, int length){
  reverse(list, 0, p-1);
  reverse(list, p, length-1);
  reverse(list, 0, length-1);
}

int main(int argc, char *argv[])
{
  int list[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
  int length = sizeof(list)/sizeof(list[0]);
  solution(list, 3, length);

  for (int i = 0; i<length; i++) {
    printf("%d, ",list[i]);
  }
  return EXIT_SUCCESS;
}
