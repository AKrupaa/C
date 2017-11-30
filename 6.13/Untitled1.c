/*
Napisz program, kt�ry wczyta od u�ytkownika macierz o wymiarze 5�5 i odnajdzie w niej dwa elementy, 
kt�rych suma b�dzie najwi�ksz� warto�ci�. 
Wy�wietl na ekranie maksymaln� warto�� sumy dw�ch element�w, 
liczb� znalezionych takich par. 
Nast�pnie w ka�dej linii maj� zosta� wypisane wsp�rz�dne element�w 
(bez powt�rze�, to znaczy warto�� sumy element�w z kom�rki 1 1 i 2 2, 
to to samo co warto�� element�w z kom�rki 2 2 i 1 1, wi�c wypisujemy tylko jedn� par� wsp�rz�dnych), 
kt�rych warto�ci tworz� najwi�ksz� sum� 
(po spacjach numer wiersza numer kolumny pierwszej warto�ci numer wiersza numer kolumny drugiej warto�ci).
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
