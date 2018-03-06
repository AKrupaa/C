#include <stdio.h>

int main()
{
	int tab[5];
	int *wtab;
	wtab=&tab[0];
	int i;
	int liczba;
	for(i=0;i<5;i++)
		scanf("%i",wtab+i);
	
	for(i=0;i<5;i+=2)
	printf("%i ",*(wtab+i));
	return 0;	
}
