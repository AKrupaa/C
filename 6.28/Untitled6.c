/*
Napisz program, który wczyta od u¿ytkownika macierz o wymiarze 10×10 i zastosuje na niej filtr uœredniaj¹cy o rozmiarze 3×3. 
Oznacza to, ¿e macierz wyjœciowa bêdzie mia³a rozmiar 8×8. 
Wartoœæ ka¿dej komórki macierzy wyjœciowej ma byæ wartoœci¹ œredni¹ z 9 elementów macierzy wejœciowej. 
Program ma wyœwietliæ macierz wyjœciow¹ z dok³adnoœci¹ do dwóch miejsc po przecinku.
*/

#include <stdio.h>
#define SIZE 10
#define SIZEW 8

int main()
{
	int tab[10][10];
	float tabW[8][8];
	int liczba;
	int suma=0;
	float srednia;
	printf("wprowadz liczby: \n");
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			scanf("%i",&liczba);
			tab[i][j]=liczba;
		}		
	}
	printf("\n");
	
	for(int i=0;i<SIZEW;i++)
	{
		for(int j=0;j<SIZEW;j++)
		{
			//tabW[i][j]=srednia3x3;
			for(int k=i;k<i+3;k++)
			{
				for(int l=j;l<j+3;l++)
				{
					suma+=tab[k][l];
				}
			}
			srednia=(float)(suma)/(3*3);
			tabW[i][j]=srednia;
			suma=0;
		}
	}
	
	for(int i=0;i<SIZEW;i++)
	{
		for(int j=0;j<SIZEW;j++)
		{
			printf("%6.2f ",tabW[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
