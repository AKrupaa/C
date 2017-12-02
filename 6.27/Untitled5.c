/*
Napisz program, który wczyta od u¿ytkownika macierz o wymiarze 10×5
i wyznaczy i wypisze macierz transponowan¹ do wczytanej macierzy.
*/

#include <stdio.h>
#define W 10
#define M 5

int main()
{
	int tab[5][10];
	int tabT[10][5];
	int liczba;
	printf("wprowadz liczby: \n");
	for(int i=0;i<M;i++)
	{
		for(int j=0;j<W;j++)
		{
			scanf("%i",&liczba);
			tab[i][j]=liczba;
		}		
	}
	printf("\n");
	for(int i=0;i<M;i++)
	{
		for(int j=0;j<W;j++)
		{
			printf("%4i ",tab[i][j]);
		}		
		printf("\n");
	}
	printf("\n");
	
	//int tabP[W];
	for(int i=0;i<M;i++)
	{
		for(int j=0;j<W;j++)
		{
			//tabP[j]=tab[i][j];
			tabT[j][i]=tab[i][j];
		}
	//	for(int k=0;k<W;k++)
	//	{
	//		tabT[k][i]=tabP[k];
	//	}
	}
	
	for(int i=0;i<W;i++)
	{
		for(int j=0;j<M;j++)
		{
			printf("%4i ", tabT[i][j]);
		}	
		printf("\n");
	}
	
	
	
	return 0;
}
