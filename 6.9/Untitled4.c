/*
Napisz program, kt�ry wczyta od u�ytkownika tablic� o wymiarach 10�10. 
Program ma obliczy� warto�� nast�puj�cego wyra�enia - suma element�w znajduj�cych si� w kom�rkach, 
kt�rych suma indeks�w jest liczb� parzyst� minus suma element�w, kt�re znajduj� si� w kom�rkach, 
kt�rych suma indeks�w jest liczb� nieparzyst�.
*/


#include <stdio.h>
#define SIZE 10


int main()
{
	int liczba;
	int tab[10][10];
	int sumaP=0;
	int sumaN=0;
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			scanf("%i", &liczba);
			tab[i][j]=liczba;
		}
	}
	printf("\n\n\n");
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			if((i+j)%2==0)
			{
				sumaP+=tab[i][j];
			}
			else
			{
				sumaN+=tab[i][j];
			}
		}
	}
	
	printf("WYNIK = %i", sumaP-sumaN);
	return 0;
}
