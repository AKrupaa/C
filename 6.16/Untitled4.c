/*
Napisz program, kt�ry wczyta od u�ytkownika macierz o wymiarze 5�5. 
Wy�wietl na ekranie warto�ci element�w z kolumny, w kt�rej suma element�w jest najwi�ksza 
(warto�ci maj� by� wy�wietlone w jednej linii, oddzielone spacjami). 
Je�eli w kilku kolumnach suma element�w jest taka sama, to nale�y wy�wietli� je w osobnych liniach.
*/


#include <stdio.h>
#define SIZE 5

int main()
{
	printf("podaj liczby: \n");
	int tab[5][5];
	int liczba;
	int suma=0;
	int sumaMAX;
	int ktorakolumna;
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			scanf("%i",&liczba);
			tab[i][j]=liczba;
		}
	}
	sumaMAX=tab[0][0];
	for(int i=0;i<SIZE;i++)
	{
		suma=0;
		for(int j=0;j<SIZE;j++)
		{
			suma+=tab[j][i];
			if(j==SIZE-1)
			{
				if(sumaMAX<suma)
				{
					sumaMAX=suma;
				}
			}
		}
	}
	printf("\n");
	for(int i=0;i<SIZE;i++)
	{
		suma=0;
		for(int j=0;j<SIZE;j++)
		{
			suma+=tab[j][i];
			if(j==SIZE-1)
			{
				if(sumaMAX==suma)
				{
					for(int k=0;k<SIZE;k++)
					{
						printf("%i ", tab[k][i]);
					}
					printf("\n");
				}
			}
		}
	}
	
	
	return 0;
}
