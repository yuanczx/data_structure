#include "insert_sort.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
  int array[] = {1,2,4,3,2,412,9,81,28,54,6,9,34,2};
  InsertSort(array,sizeof(array)/sizeof(int));
  for (int i = 0; i<sizeof(array)/sizeof(int); i++) {
    printf("%d, ",array[i]);
  }
  return 0;
}
