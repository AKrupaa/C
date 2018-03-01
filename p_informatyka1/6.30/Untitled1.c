/*
Napisz program, kt�ry wczyta od u�ytkownika macierz o wymiarze 10�10 oraz wektor 
(co najwy�ej 4 elementy, koniec wektora oznaczony warto�ci� 0). 
Dla ka�dego elementu wektora program ma odnale�� we wczytanej macierzy indeksy wszystkich kom�rek, 
w kt�rych znajduje si� kwadrat warto�ci tego elementu. 
Na wyj�ciu maj� si� pojawi� w kolejnych liniach, oddzielone spacjami, indeks elementu z wektora (0 - 3), 
liczba odnalezionych kwadrat�w tego elementu w macierzy, indeksy kom�rek w macierzy, 
w kt�rych te warto�ci si� znajduj� (w kolejno�ci indeks wiersza, indeks kolumny, oddzielone spacjami).
*/

#include <stdio.h>
#define SIZE 10

int main()
{
	printf("podaj liczby: \n");
	int tab[10][10];
	int liczba;
	int ile=0;
	int kwadrat;
	int wektor[4];
	int pomoc[100];
	int p=0;
	int a=0;
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			scanf("%i",&liczba);
			tab[i][j]=liczba;
		}
	}
	
	printf("wprowadz wektor: (max: 4 elementy)\n");
	
	
	do
	{
		scanf("%i",&liczba);
		if(liczba!=0)
		wektor[a++]=liczba;
	}
	while(a<4&&liczba!=0);
		
		printf("\n\n");
	for(int i=0;i<a;i++)
	{
		kwadrat=wektor[i]*wektor[i];
	//	printf("wektor kwadrat = %i\n", kwadrat);
		for(int j=0;j<SIZE;j++)
		{
			for(int k=0;k<SIZE;k++)
			{
				if(tab[j][k]==kwadrat)
				{
					ile++;
					pomoc[p++]=k; //k-ta kolumna
					pomoc[p++]=j; //j-oty wiersz
				}
				
			}
		}
		printf("%i %i ", i, ile);
		for(int l=0;l<p;l++)
		{
			printf("%i ",pomoc[l]);
		}
		printf("\n");
		ile=0; p=0;
	}

	return 0;
}
