/* 6.22
Napisz program, który wczyta od u¿ytkownika macierz o wymiarze 5×5. 
Wyœwietl na ekranie wartoœci elementów z kolumny, 
w której ró¿nica pomiêdzy elementem najwiêkszym a najmniejszym jest najwiêksza 
(wartoœci maj¹ byæ wyœwietlone w jednej linii, oddzielone spacjami). 
Je¿eli w kilku kolumnach ró¿nica pomiêdzy najwiêkszym i najmniejszym elementem jest taka sama, 
to nale¿y wyœwietliæ wartoœci tych kolumn w osobnych liniach.
*/

#include <stdio.h>
#define SIZE 5

int main()
{
	printf("podaj liczby: \n");
	int liczba;
	int suma=0;
	int min;
	int max;
	int MIN;
	int MAX;
	int tab[5][5];
	int roznica[5];
	int a=0;
	int ktora;
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			scanf("%i",&liczba);
			tab[i][j]=liczba;
		}
	}
	
	//element najwiekszy w kolumnie?
	//element najmniejszy w kolumnie?
	//najwiekszy-najmniejszy=roznica
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			min=tab[j][i];
			max=tab[j][i];
			if(j==0)
			{
				MIN=min;
				MAX=max;
			}
			if(MIN>min)
			MIN=min;
			
			if(MAX<max)
			MAX=max;
			
			if(j==5)
			roznica[a++]=(MAX-MIN);
		}
	}
	
	//w ktorej kolumnie jest najwieksza roznica?
	for(int i=0;i<a;i++)
	{
		if(i==0)
		max=roznica[a];
		
		if(max<roznica[a])
		{
			max=roznica[a];
			ktora=i;
		}
	}
	
	//wypisz ta kolumne
	printf("\n");
	for(int i=0;i<SIZE;i++)
	{
		printf("%i ", tab[i][ktora]);
	}
	
	return 0;
}
