#include <stdio.h>
//Napisz program, który wypelnia tablice wartosciami od 0 do 10, a nastepnie wyswietla zawartosc tej tablicy na ekranie. Wypelnianie oraz wyswietlanie nie moze znajdowac sie w tej samej petli.
int main()
{
	int tab[11];
	for(int i=0;i<11;i++)
	{
		tab[i]=i;
	}
	
	for(int k=0;k<11;k++)
	{
		printf("%i ",tab[k]);
	}
	
	getchar();
	return 0;
}
