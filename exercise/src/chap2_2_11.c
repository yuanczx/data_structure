#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int partition(int A[], int L, int R){
  int pivot = A[L];
  while (L<R) {
    while (L<R && A[R]>=pivot) R--;
    A[L] = A[R];
    while (L<R && A[L]<=pivot) L++;
    A[R] = A[L];
  }
  A[L] = pivot;
  return L;
}

int* merge(int A[], int B[], int la, int lb){
  int *merged = malloc(sizeof(int)*(la+lb));
  int index_a = 0,index_b = 0, i;
  for (i = 0; i < la+lb; i++) {
    if (A[index_a]<=B[index_b]) {
      merged[i] = A[index_a++];
    }else {
      merged[i] = B[index_b++];
    }
    if (index_a >= la) {
      memcpy(&merged[i+1], &B[index_b], (lb-index_b)*sizeof(int));
      break;
    }else if (index_b >= lb) {
      memcpy(&merged[i+1], &A[index_a], (la-index_a)*sizeof(int));
      break;
    }
  }
  return merged;
}
void quick_sort(int A[], int L, int R){
  if (L>=R) return;
  int pivot = partition(A, L, R);
  quick_sort(A, L, pivot-1);
  quick_sort(A, pivot+1, R);
}

void solution(int A[], int B[], int la, int lb){
  quick_sort(A, 0, la-1);
  quick_sort(B, 0, lb-1);
  int *merged = merge(A, B, la, lb);
  for (int i = 0; i<la+lb; i++) {
    printf("%d, ",merged[i]);
  }
  /* printf("%d",merged[(la+lb+1)/2]); */
}

int main(int argc, char *argv[])
{
  int A[] = {2,2,4,12,46,89,54,2,7,0,42,32,18};
  int B[] = {123,0,120,5,6,8,34,12};
  solution(A, B, sizeof(A)/sizeof(A[0]), sizeof(B)/sizeof(B[0]));
  return EXIT_SUCCESS;
}
