/*
Napisz program, który wczyta od u¿ytkownika macierz o wymiarze 5×5. 
Wyœwietl na ekranie wartoœci œrednie, z dok³adnoœci¹ do dwóch miejsc po przecinku, 
dla ka¿dej kolumny, rozpoczynaj¹c od kolumny 0. Wartoœci maj¹ byæ oddzielone spacjami.
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
	
	//policz srednia dla kolumn...
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			suma+=tab[j][i];
			if(j==SIZE-1)
			{
				printf("%.2f ", (float)(suma)/(SIZE));
				suma=0;
			}
		}
	}
	return 0;
}
	
	
