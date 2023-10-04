#include "insert_sort.h"
#include <stdio.h>

void insert_sort(int arr[], int size) {
  int i, j;
  for (i = 1; i < size; i++) {
    if (arr[i] < arr[i - 1]) {
      int temp = arr[i];
      for (j = i - 1; temp < arr[j]; --j) {
        arr[j + 1] = arr[j];
      }
      arr[j + 1] = temp;
    }
  }
}
