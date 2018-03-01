/*
Napisz program, który wczyta od u¿ytkownika macierz o wymiarze 5×5. 
Wyœwietl na ekranie wartoœci maksymalnych elementów dla poszczególnych wierszy i kolumn, 
zaczynaj¹c od wiersza 0 do 4, a nastêpnie od kolumny 0 do 4 (wartoœci maj¹ byæ oddzielone spacjami).
*/

#include <stdio.h>
#define SIZE 5

int main()
{
	printf("podaj liczby: \n");
	int tab[5][5];
	int liczba;
	int max;
	int supermax;
	
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			scanf("%i", &liczba);
			tab[i][j]=liczba;
		}
	}
	
	//wiersze
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			if(j==0)
			supermax=tab[i][j];
			
			max=tab[i][j];
			if(supermax<max)
			supermax=max;
			
			if(j==SIZE-1)
			printf("Max dla wiersza %i wynosi: %i\n", i, supermax);
		}
	}
	printf("\n");
	//kolumny
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			if(j==0)
			supermax=tab[j][i];
			
			max=tab[j][i];
			if(supermax<max)
			supermax=max;
			
			if(j==SIZE-1)
			printf("Max dla kolumny %i wynosi: %i\n", i, supermax);
		}
	}
	
	return 0;
}
