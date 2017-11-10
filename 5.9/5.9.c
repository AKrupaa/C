//Napisz program pobierajacy od uzytkownika 10 wartosci i zapisujacy je w tablicy. Po pobraniu wartosci od uzytkownika, wyswietl je na ekranie.
#include <stdio.h>

int main()
{
	printf("Program wyswietla dziesiec wartosci wpisanych przez Ciebie.\n");
	float tab[10];
	float a;
	for(int i=0;i<10;i++)
	{
		printf("Wpisz liczbe %i: ", i+1);
		scanf("%f", &a);
		tab[i]=a;
	}	
	for(int k=0;k<10;k++)
	{
		printf("%2i. element: %f\n", k+1 ,tab[k]);
	}
	getchar();
	return 0;
}
