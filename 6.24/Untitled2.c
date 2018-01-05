/*
Napisz program, który wczyta od u¿ytkownika macierz o wymiarze 5×5 
i wyznaczy wartoœæ œredni¹ ze wszystkich elementów macierzy. 
Program ma wypisaæ wspó³rzêdne komórki (indeks wiersza i kolumny oddzielone spacjami), 
której wartoœæ jest najbli¿sza œredniej. 
Je¿eli jest wiêcej takich elementów, ich indeksy maj¹ zostaæ wypisane w osobnych liniach.
*/

#include <stdio.h>
#include <math.h>
#define SIZE 5

int main()
{
	printf("podaj liczby: \n");
	int tab[5][5];
	int liczba;
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			scanf("%i",&liczba);
			tab[i][j]=liczba;
		}
	}
	//srednia:
	int suma=0;
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			suma+=tab[i][j];
		}
	}
	float srednia=round((float)(suma)/(SIZE*SIZE));
	printf("srednia = %f\n", srednia);
	liczba=(int)srednia;
	printf("liczba = %i",liczba);
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			if(tab[i][j]>=liczba-1&&tab[i][j]<=liczba+1)
			{
			//	printf("liczba ktora uznalem za bliska wartosci: %i\n", tab[i][j]);
				printf("wspolrzednie %i %i",i,j);
			}
		}
	}
	return 0;
}
