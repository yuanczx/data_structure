#include "bubble_sort.h"
#include "insert_sort.h"
#include "select_sort.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int array[] = {1, 2, 4, 3, 2, 412, 9, 81, 28, 54, 6, 9, 34, 2};
  int length = sizeof(array) / sizeof(int);
  int temp[length];
  memcpy(temp, array, sizeof(array));
  printf("Select sort:\n");
  insert_sort(temp, length);
  for (int i = 0; i < length; i++) {
    printf("%d, ", array[i]);
  }

  memcpy(temp, array, sizeof(array));
  printf("\nBubble sort:\n");
  insert_sort(temp, length);
  for (int i = 0; i < length; i++) {
    printf("%d, ", array[i]);
  }

  memcpy(temp, array, sizeof(array));
  printf("\nSelect sort:\n");
  select_sort(temp, length);
  for (int i = 0; i < length; i++) {
    printf("%d, ", array[i]);
  }
  return 0;
}
