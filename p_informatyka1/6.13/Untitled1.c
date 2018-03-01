/*
Napisz program, który wczyta od u¿ytkownika macierz o wymiarze 5×5 i odnajdzie w niej dwa elementy, 
których suma bêdzie najwiêksz¹ wartoœci¹. 
Wyœwietl na ekranie maksymaln¹ wartoœæ sumy dwóch elementów, 
liczbê znalezionych takich par. 
Nastêpnie w ka¿dej linii maj¹ zostaæ wypisane wspó³rzêdne elementów 
(bez powtórzeñ, to znaczy wartoœæ sumy elementów z komórki 1 1 i 2 2, 
to to samo co wartoœæ elementów z komórki 2 2 i 1 1, wiêc wypisujemy tylko jedn¹ parê wspó³rzêdnych), 
których wartoœci tworz¹ najwiêksz¹ sumê 
(po spacjach numer wiersza numer kolumny pierwszej wartoœci numer wiersza numer kolumny drugiej wartoœci).
*/

#include <stdio.h>

#define SIZE 5

int main()
{
	printf("podaj liczby: \n");
	int liczba;
	int suma;
	int sumaMAX=-999999;
	int liczba1;
	int ile=0;
	int tab[5][5];
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			scanf("%i",&liczba);
			tab[i][j]=liczba;
		}
	}
	
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			liczba=tab[i][j];
			for(int k=i;k<SIZE;k++)
			{
				for(int l=j;l<SIZE;l++)
				{
					if(i!=k&&k!=l)
					{
						liczba1=tab[k][l];
						suma=liczba+liczba1;
						if(sumaMAX<suma)
						{
							sumaMAX=suma;
						}
					}
				}
			}
		}
	}
	
	
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			liczba=tab[i][j];
			for(int k=i;k<SIZE;k++)
			{
				for(int l=k;l<SIZE;l++)
				{
					if(i!=k&&k!=l)
					{
						liczba1=tab[k][l];
						suma=liczba+liczba1;
						if(sumaMAX==suma)
						{
							ile++;
						}
					}
				}
			}
		}
	}
	printf("sumaMAX=%i, %i\n",sumaMAX, ile);
	
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			liczba=tab[i][j];
			for(int k=i;k<SIZE;k++)
			{
				for(int l=k;l<SIZE;l++)
				{
					if(i!=k&&k!=l)
					{
						liczba1=tab[k][l];
						suma=liczba+liczba1;
						if(sumaMAX==suma)
						{
							printf("%i %i %i %i", i, j, k, l);
						}
					}
				}
			}
		}
	}
	
	return 0;
}
