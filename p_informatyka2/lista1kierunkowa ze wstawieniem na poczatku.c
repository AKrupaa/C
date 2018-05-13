#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	struct Element_listy
	{
	int dana_1;
	int dana_2;
	struct Element_listy *nast;
	};

struct Element_listy *pocz = NULL, *wsk = NULL;

//Utworzenie pierwszego elementu listy
pocz = malloc(sizeof(struct Element_listy));

pocz->nast = NULL;
pocz->dana_1 = 1;
pocz->dana_2 = 1;

//Utworzenie drugiego elementu listy
wsk = malloc(sizeof(struct Element_listy));

wsk->nast = NULL;
wsk->dana_1 = 2;
wsk->dana_2 = 2;

//Po³¹czenie elementów listy
wsk->nast = pocz;

//Przesuniêcie wskaŸnika pocz
pocz = wsk;
wsk = pocz;

while (wsk)
{
	printf("%d %d\n", wsk->dana_1, wsk->dana_2);
	wsk = wsk->nast;
}

	return 0;
}
