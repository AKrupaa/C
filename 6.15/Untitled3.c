/*
Napisz program, który wczyta od u¿ytkownika macierz o wymiarze 5×5. 
Wyœwietl na ekranie sumê wartoœci elementów znajduj¹cych siê na g³ównej przek¹tnej, 
a nastêpnie na drugiej przek¹tnej (wartoœci maj¹ byæ oddzielone spacjami).
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
	
	//z lewej do prawej - przek¹tna...
	
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			if(i==j)
			{
				suma+=tab[i][j];
			}
		}
	}
	printf("\n%i ", suma);
	suma=0;
	
	
	for(int i=0;i<SIZE;i++)
 	suma+=tab[i][SIZE-1-i];
	printf("%i ", suma); //z prawej do lewej - przekatna...
	return 0;
}
