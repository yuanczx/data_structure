#include <stdio.h>
#include <stdlib.h>

typedef struct LNode{
  int data;
  struct LNode *next;
} LNode, *LinkList;

//要找到倒数第k个结点，当指针 q 增加 length 指针 q 增加 (length-k+1) 则此时指针 q 指向倒数第k个结点
int search_k(LinkList list, int k){
  LNode *p = list->next, *q = list->next;
  int count = 0;
  while (p != NULL) {
    if (count<k) count++;
    else q=q->next;
    p = p->next;
  }
  if (count<k) return 0;
  printf("%d",q->data);
  return 1;
}

int main(int argc, char *argv[])
{
  LinkList list = malloc(sizeof(LNode));
  LNode *p = list;
  for (int i = 0; i<10; i++) {
    p->next = malloc(sizeof(LNode));
    p->next->data = i;
    p = p->next;
  }
  p->next = NULL;
  search_k(list, 1);
  return EXIT_SUCCESS;
}
