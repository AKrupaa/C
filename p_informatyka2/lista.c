#include <stdlib.h>
#include <stdio.h>


struct _list {
  int value;
  struct _list *next;
};

typedef struct _list list;

list * listPush(list *l, int value)
{
  if (l != NULL) {
    while (l->next != NULL) l = l->next;
  }
  list *new = (list *) malloc(sizeof(list));
  if (new == NULL) return NULL;
  if (l != NULL) l->next = new;
  new->value = value;
  new->next = NULL;
  return new;
}

int listPop(list *l)
{
  while (l->next->next != NULL) {
    l = l->next;
  }
  int ret = l->next->value;
  free(l->next);
  l->next = NULL;
  return ret;
}

int listSize(list *l)
{
  int i = 0;
  while (l != NULL) {
    l = l->next;
    i++;
  }
  return i;
}

list* listAppend(list *l, int value)
{
  list* new = listPush(NULL, value);
  new->next = l;
  return new;
}

list* listInsert(list *element, int value)
{
  list* new = listPush(NULL, value);
  new->next = element->next;
  element->next = new;
  return new;
}

void listPrint(list *l)
{
  while (l != NULL) {
    printf("%d\n", l->value);
    l = l->next;
  }
}

int listGetValue(list *l, unsigned int node)
{
  int i = 0;
  while (i != node) {
    if (l->next == NULL && i != node)
      return -1;
    l = l->next;
    i++;
  }
  return l->value;
}

void listFree(list *l)
{
  if (l->next != NULL) listFree(l->next);
  free(l);
}

int main()
{
  list *lista = listPush(NULL, 2);
  listPush(lista, 1);
  listPush(lista, 3);
  listPush(lista, 7);
  listPrint(lista);
  lista = listAppend(lista, 8);
  puts("");
  listPrint(lista);
  printf("3rd = %d\n", listGetValue(lista, 3));
  listFree(lista);
}
