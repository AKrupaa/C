/*
Napisz program, kt�ry wczyta od u�ytkownika macierz o wymiarze 5�5. 
Wy�wietl na ekranie warto�ci �rednie, z dok�adno�ci� do dw�ch miejsc po przecinku, 
dla ka�dej kolumny, rozpoczynaj�c od kolumny 0. Warto�ci maj� by� oddzielone spacjami.
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
	
	
