/*
Rozbuduj program z zadania 6.4 o obliczanie sumy element�w w poszczeg�lnych wierszach i kolumnach dla wszystkich macierzy. 
Program ma najpierw wypisa� macierze A, B i C, a nast�pnie w kolejnch wierszach wypisa�:
sum� element�w dla poszczeg�lnych wierszy macierzy A,
sum� element�w dla poszczeg�lnych kolumn macierzy A,
sum� element�w dla poszczeg�lnych wierszy macierzy B,
sum� element�w dla poszczeg�lnych kolumn macierzy B,
sum� element�w dla poszczeg�lnych wierszy macierzy C,
sum� element�w dla poszczeg�lnych kolumn macierzy C.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 4

int main()
{
	int A[4][4];
	int B[4][4];
	int C[4][4];
	
	srand(time(NULL));
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			A[i][j]=0+rand()%20;
			B[i][j]=0+rand()%20;	
		}
	}
	
	//macierz jednostkowa:
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			if(i==j)
			{
				C[i][j]=1;
			}
			else
			{
				C[i][j]=0;
			}
		}
	}
		printf("Macierz A: -------\n");
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
			printf("%4d ", A[i][j]);
		printf("\n");		
	}
		printf("\nMacierz B: -------\n");
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
			printf("%4d ", B[i][j]);
		printf("\n");		
	}
		printf("\nMacierz C: -------\n");
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
			printf("%4d ", C[i][j]);
		printf("\n");		
	}
	
	//wiersze A
	printf("\n");
	int suma=0;
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			suma+=A[i][j];
		}
		printf("%4d ",suma);
		suma=0;
	}
	//kolumny
		printf("\n");
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			suma+=A[j][i];
		}
		printf("%4d ",suma);
		suma=0;
	}
	
	//wiersze B
	printf("\n");
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			suma+=B[i][j];
		}
		printf("%4d ",suma);
		suma=0;
	}
	
	//kolumny
		printf("\n");
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			suma+=B[j][i];
		}
		printf("%4d ",suma);
		suma=0;
	}
	//wiersze C
	printf("\n");
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			suma+=C[i][j];
		}
		printf("%4d ",suma);
		suma=0;
	}
	
	//kolumny
		printf("\n");
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			suma+=C[j][i];
		}
		printf("%4d ",suma);
		suma=0;
	}

	return 0;
}
