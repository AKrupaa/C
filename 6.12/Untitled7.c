/*
Napisz program, kt�ry wczyta od u�ytkownika macierz o wymiarze 10�10 i odnajdzie w niej wszystkie kom�rki, 
kt�rych warto�� jest mniejsza od jej 8 s�siad�w. 
Wy�wietl na ekranie liczb� znalezionych minim�w lokalnych oraz w kolejnych liniach adresy kom�rek, 
w kt�rych si� one znajduj� (w postaci numer wiersza, numer kolumny). 
W przypadku, kiedy nie b�dzie takiej kom�rki w tablicy program ma wy�wietli� napis �Brak�.
*/

#include <stdio.h>
#include <math.h>
#define SIZE 10

int main()
{
	int liczba;
	int tab[10][10];
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			scanf("%i", &liczba);
			tab[i][j]=liczba;
		}
	}
	return 0;	
}
