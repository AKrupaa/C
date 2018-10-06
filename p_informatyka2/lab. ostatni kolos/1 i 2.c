#include <stdio.h>
#include <stdlib.h>

struct _list 
{
	float value1;
	struct _list *next;
};

typedef struct _list list;

list * push(list *l, float value1)
{
  if (l != NULL) {
    while (l->next != NULL) l = l->next;
  }
  list *new = (list *) malloc(sizeof(list));
  if (new == NULL) return NULL;
  if (l != NULL) l->next = new;
  new->value1 = value1;
  new->next = NULL;
  return new;
}


int size(list *l)
{
	int i=0;
	while(l!=NULL) 
	{
		l=l->next;
		i++;	
	}
	return i;
}

void print(list *l)
{
	while(l!=NULL)
	{
		printf("%f\n", l->value1);
		l=l->next;
	}
}

void printf_file(list *l)
{
	FILE *fp;
	fp=fopen("list.txt","w");
	if(fp==NULL)
		printf("blad");
	
	while(l!=NULL)
	{
		fprintf(fp,"%f\n", l->value1);
		l=l->next;
	}
}


int main()
{
	list *lista=push(NULL, 1.1);
	push(lista, 2.1);
	push(lista, 3.1);
	push(lista, 4.1);
	push(lista, 5.1);
	print(lista);
	printf("\n");
	printf("Rozmiar= %i", size(lista));
	printf("\n");
	printf_file(lista);
	return 0;
}

