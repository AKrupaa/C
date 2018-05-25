/* Zadeklaruj w programie tablice typu calkowitego int i zainicjuj ja (podczas deklaracji) wartosciami od 0 do 10. Wyswietl wartosci wszystkich elementów na ekranie bez petli oraz z uzyciem petli. */
#include <stdio.h>


int main()
{
	int tab[]={0,1,2,3,4,5,6,7,8,9,10};
	printf("Bez petli: %i ", tab[0]);
	printf("%i ", tab[1]);
	printf("%i ", tab[2]);
	printf("%i ", tab[3]);
	printf("%i ", tab[4]);
	printf("%i ", tab[5]);
	printf("%i ", tab[6]);
	printf("%i ", tab[7]);
	printf("%i ", tab[8]);
	printf("%i ", tab[9]);
	printf("%i \nZ uzyciem petli: ", tab[10]);
	
	
	for(int i=0;i<11;i++)
	{
		printf("%i ", tab[i]);
	}
		getchar();
	return 0;
}
