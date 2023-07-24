#include "merge_sort.h"
#include <string.h>

void merge(int arr[], int left, int mid, int right) {
  int i = 0, j = mid-left+1,k = 0;
  int length = right - left + 1;
  int copy[length];
  memcpy(copy, &arr[left], sizeof(int)*length);
  while (i < mid-left+1 && j < length) {
    if (copy[i] < copy[j]) arr[left+k] = copy[i++];
    else arr[left+k] = copy[j++];
    k++;
  }
  if (i <= mid-left) {
    memcpy(&arr[left+k], &copy[i], sizeof(int)*(mid-left-i));
  }else if (j < length) {
    memcpy(&arr[left+k], &copy[j], sizeof(int)*(length-j));
  }
}

void merge_sort_r(int arr[],int low,int high){
  if (low<high) {
    int mid = (low+high)/2;
    merge_sort_r(arr, low,mid);
    merge_sort_r(arr, mid+1,high);
    merge(arr, low, mid, high);
  }
}


void merge_sort(int arr[], int size) {
  merge_sort_r(arr, 0,size-1);
}
