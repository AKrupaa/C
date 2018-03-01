/*
Napisz program, który wczyta od u¿ytkownika dwie macierze (A i B) o wymiarach 5×5 ka¿da. 
Kolumny macierzy B odpowiadaj¹ wierszom macierzy A, 
Twoim zadaniem jest przypisanie ka¿demu wierszowi macierzy A 
indeksu odpowiedniej kolumny lub odpowiednich kolumn z macierzy B. 
*/


#include <stdio.h>
#define SIZE 5

int main()
{
	printf("podaj liczby A: \n");
	int A[5][5];
	int B[5][5];
	int liczba;
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			scanf("%i",&liczba);
			A[i][j]=liczba;
		}
	}
	printf("\npodaj liczby B: \n");
	
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			scanf("%i",&liczba);
			B[i][j]=liczba;
		}
	}
	
	int tabw[5];
	int tabk[5];
	int ile=0;
	int flaga=0;
	printf("\n");
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			for(int k=0;k<SIZE&&flaga==0;k++)
			{
				tabw[k]=A[i][k];
				tabk[k]=B[k][j];
			}
			for(int l=0;l<SIZE;l++)
			{
				if(tabw[l]==tabk[l])
				{
					ile++;
				}
				if(ile==5)
				{
					flaga=1;
					printf("%i %i\n",i,j);
				}
			}
			ile=0;
			flaga=0;
		}
	}
	
	
	return 0;
}
