/*
Rozbuduj program z zadania 6.4 o wykonanie nastepujacych operacji: A*B, B*A, A*C, C*A. 
Operator * oznacza mnozenie macierzy. 
Program ma najpierw wypisac macierze A, B i C, 
a nastepnie wyniki poszczególnych dzialan:
Dla utworzonych macierzy wykonaj i wyswietl wyniki nastepujacych operacji: A*B, B*A, A*C, C*A. 
Operator * oznacza mnozenie macierzy.
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
			A[i][j]=1+rand()%5;
			B[i][j]=1+rand()%5;	
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
	
	printf("\n\n------------------------------------------------\n\n");
	//nastepnie wyniki poszczególnych dzialan:  A*B, B*A, A*C, C*A
	int suma=0;
	int ArazyB[4][4];
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			suma=0;
			for(int k=0;k<SIZE;k++)
			{
				suma+=A[i][k]*B[k][j];
			}
			ArazyB[i][j]=suma;
		}
	}
	
		printf("\nMacierz A*B: -------\n");
	for(int i=0;i<SIZE;i++)
	{
		for(int a=0;a<SIZE;a++)
			printf("%4d ", ArazyB[i][a]);
		printf("\n");		
	}
	
	int BrazyA[4][4];
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			suma=0;
			for(int k=0;k<SIZE;k++)
			{
				suma+=B[i][k]*A[k][j];
			}
			BrazyA[i][j]=suma;
		}	
	}
	
			printf("\nMacierz B*A: -------\n");
	for(int i=0;i<SIZE;i++)
	{
		for(int a=0;a<SIZE;a++)
			printf("%4d ", BrazyA[i][a]);
		printf("\n");		
	}
	
	
		int ArazyC[4][4];
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			suma=0;
			for(int k=0;k<SIZE;k++)
			{
				suma+=A[i][k]*C[k][j];
			}
			ArazyC[i][j]=suma;
		}	
	}
	
			printf("\nMacierz A*C: -------\n");
	for(int i=0;i<SIZE;i++)
	{
		for(int a=0;a<SIZE;a++)
			printf("%4d ", ArazyC[i][a]);
		printf("\n");		
	}
	
		int CrazyA[4][4];
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			suma=0;
			for(int k=0;k<SIZE;k++)
			{
				suma+=C[i][k]*A[k][j];
			}
			CrazyA[i][j]=suma;
		}	
	}
	
			printf("\nMacierz C*A: -------\n");
	for(int i=0;i<SIZE;i++)
	{
		for(int a=0;a<SIZE;a++)
			printf("%4d ", CrazyA[i][a]);
		printf("\n");		
	}
	
	return 0;
}
