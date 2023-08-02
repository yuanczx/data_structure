#include <stdio.h>
#include <stdlib.h>

typedef struct LNode {
  char data;
  struct LNode *next;
} LNode, *LinkList;

int list_len(LinkList list) {
  if (list == NULL)
    return 0;
  int length = 0;
  while (list->next != NULL) {
    length++;
    list = list->next;
  }
  return length;
}

void init_list(LinkList list1, LinkList list2, char *prefix1, char *prefix2,
               char *common) {
  LinkList p = list1;
  LinkList q = list2;

  for (int i = 0; prefix1[i] != 0; i++) {
    p->data = prefix1[i];
    p->next = malloc(sizeof(LNode));
    p = p->next;
    p->data = 0;
  }
  for (int i = 0; prefix2[i] != 0; i++) {
    q->data = prefix2[i];
    q->next = malloc(sizeof(LNode));
    q = q->next;
    q->data = 0;
  }
  p->next = q->next = malloc(sizeof(LNode));
  p = p->next;

  for (int i = 0; common[i] != 0; i++) {
    p->data = common[i];
    p->next = malloc(sizeof(LNode));
    p = p->next;
  }
  p->next = NULL;
}

int main(int argc, char *argv[]) {
  LinkList list_a = malloc(sizeof(LNode));
  LinkList list_b = malloc(sizeof(LNode));

  char a[] = "constitu";
  char b[] = "ques";
  char common[] = "tion";

  init_list(list_a, list_b, a, b, common);

  int len_a = list_len(list_a);
  int len_b = list_len(list_b);
  LinkList la = list_a;
  LinkList lb = list_b;

  while (la != NULL) {
    printf("%c", la->data);
    la = la->next;
  }
  printf("\n");

  while (lb != NULL) {
    printf("%c", lb->data);
    lb = lb->next;
  }
  printf("\n");

  while (len_b > len_a && list_b != NULL) {
    list_b = list_b->next;
    len_b--;
  }

  while (len_a > len_b && list_a != NULL) {
    list_a = list_a->next;
    len_a--;
  }

  while (list_a != list_b) {
    list_a = list_a->next;
    list_b = list_b->next;
  }

  while (list_a != NULL) {
    printf("%c", list_a->data);
    list_a = list_a->next;
  }

  return EXIT_SUCCESS;
}
