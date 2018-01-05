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
	printf("podaj liczby: \n");
	int liczba;
	int ile=0;
	int tab[10][10];
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			scanf("%i", &liczba);
			tab[i][j]=liczba;
		}
	}
	
	for(int i=1;i<SIZE-1;i++)
	{
		for(int j=1;j<SIZE-1;j++)
		{
			liczba=tab[i][j];
			if(tab[i-1][j-1]>liczba)
			{
				if(tab[i-1][j]>liczba)
				{
					if(tab[i-1][j+1]>liczba)
					{
						if(tab[i][j-1]>liczba)
						{
							if(tab[i][j+1]>liczba)
							{
								if(tab[i+1][j-1]>liczba)
								{
									if(tab[i+1][j]>liczba)
									{
										if(tab[i+1][j+1]>liczba)
										{
											ile++;
											printf("(x: %i, y: %i)\n",j,i);
										}
									}
								}
							}
						}
					}
				}
			}
			
		}
	}
	if(ile>0)
	{
		printf("Znalezionych minimow: %i", ile);
	}
	if(ile==0)
	{
		printf("Brak");
	}
	
	return 0;	
}
