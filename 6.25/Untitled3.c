/*
Napisz program, który wczyta od u¿ytkownika macierz o wymiarze 5×5. 
Napisz program, który wyznaczy i wyœwietli sumê wartoœci 
wszystkich elementów znajduj¹cych siê na g³ównej przek¹tnej i nad ni¹.
*/

#include <stdio.h>
#define SIZE 5

int main()
{
	printf("podaj liczby: \n");
	int tab[5][5];
	int liczba;
	int suma=0;
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			scanf("%i",&liczba);
			tab[i][j]=liczba;
		}
	}
	printf("\n");
	for(int i=0;i<SIZE;i++)
	{
		for(int j=i;j<SIZE;j++)
		{
			suma+=tab[i][j];
		//	printf("indeks wiersza: %i + indeks kolumny: %i = sumka: %i\n", i, j, suma);
		}
	}
	printf("suma = %i", suma);
	return 0;
}
