#include "insert_sort.h"
#include <stdio.h>

void insert_sort(int *array, size_t size) {
  int i, j;
  for (i = 1; i < size; i++) {
    if (array[i] < array[i - 1]) {
      int temp = array[i];
      for (j = i - 1; i >= 0 && temp < array[j]; --j) {
        array[j + 1] = array[j];
      }
      array[j + 1] = temp;
    }
  }
}
