/*
Napisz program, który wczyta od u¿ytkownika dwie macierze (A i B) o wymiarach 5×5 ka¿da. 
Program ma wyznaczyæ i wyœwietliæ macierz C, sk³adaj¹c¹ siê z kolumn macierzy A lub B. 
Do macierzy C ma byæ wpisana kolumna z tej macierzy, w której suma elementów danej kolumny jest wiêksza. 
Je¿eli suma elementów w danej kolumnie jest w obu macierzach taka sama to
do macierzy C ma zostaæ przepisana kolumna z macierzy A. 
*/

#include <stdio.h>
#define SIZE 5

int main()
{
	int A[5][5];
	int B[5][5];
	int C[5][5];
	int liczba;
	int sumaA=0;
	int sumaB=0;
	
		printf("podaj liczby (macierz A): \n");
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			scanf("%i",&liczba);
			A[i][j]=liczba;
		}
	}	
	
		printf("podaj liczby (macierz B): \n");
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			scanf("%i",&liczba);
			B[i][j]=liczba;
		}
	}	
	printf("\n\n");
	
	for(int i=0;i<SIZE;i++)
	{
		sumaA=0;
		sumaB=0;
		for(int j=0;j<SIZE;j++)
		{
			sumaA+=A[j][i];
			sumaB+=B[j][i];
			if(j==4)
			{
				if(sumaA>=sumaB)
				{
					for(int k=0;k<SIZE;k++)
					{
						C[k][i]=A[k][i];
					}
				}
				else
				{
					for(int k=0;k<SIZE;k++)
					{
						C[k][i]=B[k][i];
					}
				}
			}
		}
	}
	
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			printf("%4i ",C[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
