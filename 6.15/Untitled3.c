/*
Napisz program, kt�ry wczyta od u�ytkownika macierz o wymiarze 5�5. 
Wy�wietl na ekranie sum� warto�ci element�w znajduj�cych si� na g��wnej przek�tnej, 
a nast�pnie na drugiej przek�tnej (warto�ci maj� by� oddzielone spacjami).
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
	
	//z lewej do prawej - przek�tna...
	
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
