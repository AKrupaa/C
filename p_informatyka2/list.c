#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ELEMENTTYPE int

struct _list {
  ELEMENTTYPE value;
  struct _list* next;
};

typedef struct _list list;

//tested
list* listPush(list* l, ELEMENTTYPE v)
{
  if (l != NULL) {
    while (l->next != NULL) l = l->next;
  }
  list* new = (list*)malloc(sizeof(list));
  if (new == NULL) return NULL;
  if (l != NULL) l->next = new;
  new->value = v;
  new->next = NULL;
  return new;
}

//tested
ELEMENTTYPE listPop(list* head)
{
  while (head->next->next != NULL) {
    head = head->next;
  }
  ELEMENTTYPE ret = head->next->value;
  free(head->next);
  head->next = NULL;
  return ret;
}

//tested
int listSize(list* head)
{
  int i = 0;
  while (head != NULL) {
    head = head->next;
    ++i;
  }
  return i;
}

/* węzły liczymy od zera */
//tested
ELEMENTTYPE listGetValue(list* head, int node)
{
  int i = 0;
  while (i != node) {
    if (head->next == NULL && i != node) {
      return -1;
    }
    head = head->next;
    i++;
  }
  return head->value;
}

//tested
ELEMENTTYPE listGetLastValue(list* head)
{
  while (head->next->next != NULL) {
    head = head->next;
  }
  return head->next->value;
}

//tested
list* listGetNode(list* head, int node)
{
  int i = 0;
  while (i != node) {
    if (head->next == NULL && i != node) {
      return NULL;
    }
    head = head->next;
    i++;
  }
  return head;
}

//tested
list* listGetLastNode(list* head)
{
  while (head->next != NULL) {
    head = head->next;
  }
  return head;
}

//tested
void listFree(list* l)
{
  if (l->next != NULL) {
    listFree(l->next);
  }
  free(l);
}

//tested
list* listCat(list* first, list* second)
{
  list* eol = listGetLastNode(first);
  eol->next = second;
  return first;
}

//TODO
list* listSort(list* destination, list* source)
{
  
}

//test func
void printlist(list* head)
{
  while (head != NULL) {
    printf("%d ", head->value);
    head = head->next;
  }
}

int main()
{
  list* userlist = listPush(NULL, 2);
  listPush(userlist, 1);
  listPush(userlist, 3);
  listPush(userlist, 7);

  printf("%i\n", listGetNode(userlist, 2)->value);

  printlist(userlist);
  puts("");
  return 0;
}
