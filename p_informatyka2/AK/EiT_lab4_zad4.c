#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* argument funkcji jest wskaznikiem na tablice.*/

void funkcja(int *a)
{
	int i;
	for(i=0;i<10;i++)
	*(a+i)=*(a+i)+2;
	printf("\n");
	for(i=0;i<10;i++)
	printf("%i, ", *(a+i));
	
}

int main()
{
	int tab[10];
	int *wtab;
	wtab=tab;
	srand(time(NULL));
	int i;
	for(i=0;i<10;i++)
	*(wtab+i)=rand()%8;
	
	for(i=0;i<10;i++)
	printf("%i, ", *(wtab+i));


	funkcja(wtab);
	
	
	return 0;
}
