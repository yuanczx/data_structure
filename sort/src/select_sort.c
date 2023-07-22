#include "select_sort.h"
#include "utils.h"

void select_sort(int arr[], int size) {
  int i, j, min_index;

  for (i = 0; i < size - 1; i++) {
    min_index = i;

    // Find the index of the minimum element in the remaining unsorted array
    for (j = i + 1; j < size; j++) {
      if (arr[j] < arr[min_index]) {
        min_index = j;
      }
    }

    // Swap the found minimum element with the first element
    swap(&arr[i], &arr[min_index]);
  }
}
