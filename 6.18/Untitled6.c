/*
Napisz program, który wczyta od u¿ytkownika dwie macierze (A i B) o wymiarach 5×5 ka¿da. 
Program ma wyznaczyæ i wyœwietliæ macierz C, 
zawieraj¹c¹ w ka¿dej komórce wiêksz¹ z wartoœci odpowiedniej komórki w macierzach A i B.
*/

#include <stdio.h>
#define SIZE 5

int main()
{
	int A[5][5];
	int B[5][5];
	int C[5][5];
	int liczba;
	
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
	
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			if(A[i][j]<=B[i][j])
			{
				C[i][j]=B[i][j];
			}
			else
			{
				C[i][j]=A[i][j];
			}
		}
	}
	
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			printf("%4i ", C[i][j]);
		}
		printf("\n");
	}
	return 0;
}
