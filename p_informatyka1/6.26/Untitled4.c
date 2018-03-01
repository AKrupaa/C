/*
Napisz program, który wczyta od u¿ytkownika dwie macierze A (o wymiarze 10×10) i B (o wymiarze 2×2). 
Program ma znaleŸæ i wypisaæ ile razy macierz B pojawi³a siê w macierzy A. 
W kolejnych liniach maj¹ zostaæ wypisane indeksy komórek macierzy A, 
które pokry³y siê z macierz¹ B (indeks komórki, który odpowiada lewemu górnemu rogowi macierzy B, w formacie x y).
*/

#include <stdio.h>
#define SIZEW 10
#define SIZEM 2

int main()
{
	printf("podaj liczby macierzy A: \n");
	int A[10][10];
	int B[2][2];
	int liczba;
	for(int i=0;i<SIZEW;i++)
	{
		for(int j=0;j<SIZEW;j++)
		{
			scanf("%i",&liczba);
			A[i][j]=liczba;
		}
	}
	printf("podaj liczby macierzy B: \n");
	for(int i=0;i<SIZEM;i++)
	{
		for(int j=0;j<SIZEM;j++)
		{
			scanf("%i",&liczba);
			B[i][j]=liczba;
		}
	}
	
	//teraz sprawdz czy kolejne kwadraty 2x2 macierzy zawieraja sie w B -.-
	//ile razy sie pojawily?
	//jak sie pokryja to wypisz indeksy macierzy A (x, y)
	int ile=0;
	for(int i=0;i<SIZEW-1;i++)
	{
		for(int j=0;j<SIZEW-1;j++)
		{
				if(A[i][j]==B[0][0])
				{
					if(A[i][j+1]==B[0][1])
					{
						if(A[i+1][j]==B[1][0])
						{
							if(A[i+1][j+1]==B[1][1])
							{
								ile++;
							//	printf("(x, y)=(%i, %i)\n", j,i);
							}
						}
					}
				}
		}
	}
	printf("\n%i\n",ile);
	
	for(int i=0;i<SIZEW-1;i++)
	{
		for(int j=0;j<SIZEW-1;j++)
		{
				if(A[i][j]==B[0][0])
				{
					if(A[i][j+1]==B[0][1])
					{
						if(A[i+1][j]==B[1][0])
						{
							if(A[i+1][j+1]==B[1][1])
							{
								ile++;
								printf("(x, y)=(%i, %i)\n", j,i);
							}
						}
					}
				}
		}
	}
	
	
	
	
	return 0;
}
