/*
Napisz program, który wczyta od u¿ytkownika tablicê o wymiarach 10×10. 
Program ma obliczyæ wartoœæ nastêpuj¹cego wyra¿enia - suma elementów znajduj¹cych siê w komórkach, 
których suma indeksów jest liczb¹ parzyst¹ minus suma elementów, które znajduj¹ siê w komórkach, 
których suma indeksów jest liczb¹ nieparzyst¹.
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
