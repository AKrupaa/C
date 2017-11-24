/*
Rozbuduj program z zadania 6.4 o wykonanie nastepujacych operacji: A+B, A-B, A+B+C, A-B-C, -B. 
Program ma najpierw wypisac macierze A, B i C, a nastepnie wyniki poszczególnych dzialan: A+B, A-B, A+B+C, A-B-C, -B
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
	
	printf("\n\n------------------------------------------------\n\n");
	//nastepnie wyniki poszczególnych dzialan: A+B, A-B, A+B+C, A-B-C, -B
	int AplusB[4][4];
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			AplusB[i][j]=A[i][j]+B[i][j];
		}
	}
		printf("\nMacierz A+B: -------\n");
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
			printf("%4d ", AplusB[i][j]);
		printf("\n");		
	}
	
	int AminusB[4][4];
		for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			AminusB[i][j]=A[i][j]-B[i][j];
		}
	}
	
		printf("\nMacierz A-B: -------\n");
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
			printf("%4d ", AminusB[i][j]);
		printf("\n");		
	}
	
		
		int AplusBplusC[4][4];
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
			AplusBplusC[i][j]=AplusB[i][j]+C[i][j];
	}
	
	printf("\nMacierz A+B+C: -------\n");
		for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
			printf("%4d ", AplusBplusC[i][j]);
		printf("\n");		
	}
	
		int AminusBminusC[4][4];
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
			AminusBminusC[i][j]=AminusB[i][j]-C[i][j];
	}
	
	printf("\nMacierz A-B-C: -------\n");
		for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
			printf("%4d ", AminusBminusC[i][j]);
		printf("\n");		
	}
	
		int minusB[4][4];
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
			minusB[i][j]=B[i][j]*(-1);
	}
	
	printf("\nMacierz -B: -------\n");
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
			printf("%4d ", minusB[i][j]);
		printf("\n");
	}
	
	return 0;
}
