/*
Napisz program, który wczyta od u¿ytkownika macierz o wymiarze 10×10 i odnajdzie w niej wszystkie komórki, 
których wartoœæ jest mniejsza od jej 8 s¹siadów. 
Wyœwietl na ekranie liczbê znalezionych minimów lokalnych oraz w kolejnych liniach adresy komórek, 
w których siê one znajduj¹ (w postaci numer wiersza, numer kolumny). 
W przypadku, kiedy nie bêdzie takiej komórki w tablicy program ma wyœwietliæ napis “Brak”.
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
