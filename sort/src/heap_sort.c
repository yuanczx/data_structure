#include "heap_sort.h"
#include "utils.h"

void heapify(int arr[], int size, int root_index) {
  int largest = root_index; // Assume the root is the largest element
  int left_child = 2 * root_index + 1;
  int right_child = 2 * root_index + 2;

  // If the left child is larger than the root
  if (left_child < size && arr[left_child] > arr[largest])
    largest = left_child;

  // If the right child is larger than the current largest
  if (right_child < size && arr[right_child] > arr[largest])
    largest = right_child;

  // If the largest element is not the root, swap them
  if (largest != root_index) {
    swap(&arr[root_index], &arr[largest]);

    // Recursively heapify the affected sub-tree
    heapify(arr, size, largest);
  }
}

void heap_sort(int arr[], int size) {
  // Build the heap (rearrange the array)
  for (int i = size / 2 - 1; i >= 0; i--) {
    heapify(arr, size, i);
  }

  // One by one, extract elements from the heap
  for (int i = size - 1; i > 0; i--) {
    // Move the current root (the largest element) to the end
    swap(&arr[0], &arr[i]);

    // Call heapify on the reduced heap
    heapify(arr, i, 0);
  }
}
