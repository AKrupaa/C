/*
Napisz program, który wczyta od u¿ytkownika dwie macierze (A i B) o wymiarach 5×5 ka¿da. 
Program ma znaleŸæ i wypisaæ dla poszczególnych kolumn wartoœci wystêpuj¹ce zarówno w macierzy A, jak i w macierzy B. 
W osobnych liniach, dla ka¿dej kolumny (zaczynaj¹c od 0), ma zostaæ wypisana liczba powtarzaj¹cych siê wartoœci, 
a nastêpnie oddzielone spacjami powtarzaj¹ce siê wartoœci. 
*/
#include <stdio.h>
#define SIZE 5

int main()
{
	int A[5][5];
	int B[5][5];
	int liczba;
	int ile=0;
	
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
	int tab[5];
	int a=0;
	int flaga=0;
	for(int i=0;i<SIZE;i++)//kolumnaA
	{
		for(int j=0;j<SIZE;j++)//wierszA
		{
			for(int k=0;k<SIZE;k++)
			{
				if(A[j][i]==B[k][i])
				{
					//printf("A = %i == B = %i\n", A[j][i],B[k][i]);
					//liczba=A[j][i];
					for(int l=0;l<a;l++)
					{
						if(A[j][i]==tab[l])
						{
							flaga=1;
						//	printf("WARTOSC SIE POWTORZYLA W %i wartosc= %i\n",l,tab[l]);
						}
					}
					if(flaga==0)
					{
					//	printf("WARTOSC SIE NIE POWTORZYLA WPISUJE DO TABLICY w=%i\n", liczba);
						tab[a++]=A[j][i];
						ile++;
					}
					flaga=0;
				}
			}
		}
			if(ile>0)
			{
				printf("%i ", ile);
				ile=0;
				if(a!=0)
				{
					for(int l=0;l<a;l++)
					printf("%i ",tab[l]);
					printf("\n");
					for(int q=0;q<a;q++)
					tab[q]=-999;
					a=0;
					flaga=0;
				}
			}
	}
	return 0;
}
