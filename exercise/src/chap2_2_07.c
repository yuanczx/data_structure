#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int* merge(int* l1,int len1, int* l2, int len2){
  int i = 0, j = 0, k = 0;
  int *a = malloc((len1+len2)*sizeof(l1[0]));
  while(i<len1 && j<len2){
    if (l1[i] < l2[j]) 
      a[k++] = l1[i++];
    else
      a[k++] = l2[j++];
  }
  if (i<len1) memcpy(&a[k], &l1[i], (len1-i)*sizeof(l1[0]));
  else        memcpy(&a[k], &l2[j], (len2-j)*sizeof(l2[0]));
  return a;
}

int main(int argc, char *argv[])
{
  int l1[] = {1,2,6,9,11};
  int l2[] = {2,4,6,7,8,9,10};
  int len1 = sizeof(l1)/sizeof(l1[0]);
  int len2 = sizeof(l2)/sizeof(l2[0]);
  int *a = merge(l1, len1, l2, len2);
  for (int i = 0; i<len1+len2; i++) {
    printf("%d, ",a[i]);
  }
  free(a);
  return EXIT_SUCCESS;
}
