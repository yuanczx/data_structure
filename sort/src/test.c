#include "bubble_sort.h"
#include "heap_sort.h"
#include "insert_sort.h"
#include "quick_sort.h"
#include "select_sort.h"
#include <stdio.h>
#include <string.h>

typedef void (*SortFun)(int* arr, int length);

void test_sort(int* arr,int length, char* sort_name,SortFun sort_fun){
  int temp[length];
  memcpy(temp, arr, length*sizeof(int));
  printf("%s: \n",sort_name);
  sort_fun(temp, length);
  for (int i = 0; i < length; i++) {
    printf("%d, ", temp[i]);
  }
  printf("\n");
}

int main(int argc, char *argv[]) {
  int array[] = {1, 2, 4, 3, 2, 412, 9, 81, 28, 54, 6, 9, 34, 2};
  int length = sizeof(array) / sizeof(int);

  test_sort(array, length, "Insert sort", insert_sort);
  test_sort(array, length, "Select sort", select_sort);
  test_sort(array, length, "Bubble sort", select_sort);
  test_sort(array, length, "Quick sort", quick_sort2);
  test_sort(array, length, "Heap sort", heap_sort);

  return 0;
}
