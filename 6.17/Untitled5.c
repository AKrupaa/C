/*
Napisz program, który wczyta od u¿ytkownika macierz o wymiarze 5×5. 
Wyœwietl na ekranie sumê wartoœci elementów znajduj¹cych siê w skrajnych wierszach i kolumnach.
*/

#include <stdio.h>
#define SIZE 5

int main()
{
	printf("podaj liczby: \n");
	int liczba;
	int suma=0;
	int tab[5][5];
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			scanf("%i",&liczba);
			tab[i][j]=liczba;
		}
	}
	
	// --------------			suma gora+dol
	// |			|			suma lewa+prawa
	// |			|			suma-lewygorny-prawygorny-lewydolny-prawydolny
	// |			|
	// --------------
	
	
	for(int i=0;i<SIZE;i++)
	{
		suma+=tab[0][i];
	}
	for(int i=0;i<SIZE;i++)
	{
		suma+=tab[SIZE-1][i];
	}
	for(int i=0;i<SIZE;i++)
	{
		suma+=tab[i][0];
	}
	for(int i=0;i<SIZE;i++)
	{
		suma+=tab[i][SIZE-1];
	}
	suma=suma-(tab[0][0]+tab[0][SIZE-1]+tab[SIZE-1][0]+tab[SIZE-1][SIZE-1]);
	printf("%i ",suma);
	return 0;
}
