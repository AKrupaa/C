/*
Napisz program, kt�ry wczyta od u�ytkownika macierz o wymiarze 7�7 oraz 
wektor (co najwy�ej 4 elementy, koniec wektora oznaczony warto�ci� 0). 
Program ma odnale�� we wczytanej macierzy wszystkie wyst�pienia wektora. 
Mog� one by� zapisane tylko pionowo lub poziomo. 
Program ma wypisa� liczb� wyst�pie� szukanego wektora w macierzy, 
a nast�pnie w kolejnych liniach oznaczenie po�o�enia wektora (1 - pionowo, 2 - poziomo) 
oraz po spacji indeksy pierwszej kom�rki (x y).
*/


#include <stdio.h>
#define SIZE 7

int main()
{
	int tab[7][7];
	int tabW[4];
	int a=0; //licznik
	int liczba;
	printf("wprowadz liczby: \n");
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			scanf("%i",&liczba);
			tab[i][j]=liczba;
		}		
	}
	
	printf("wprowadz wektor: (koniec wektora oznacz jako 0)\n");
	scanf("%i",&liczba);
	if(liczba!=0)
	tabW[a++]=liczba;
		
	while(liczba!=0&&a<4)
	{
		scanf("%i",&liczba);
		if(liczba!=0)
		tabW[a++]=liczba;
	}
	printf("\n");
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			printf("%4i ",tab[i][j]);
		}		
		printf("\n");
	}
		printf("\n");
//	for(int i=0;i<a;i++)
//	printf("%i ",tabW[i]);
//printf("\n\n");

	//poziomo ale tylko w prawo, patrz program.
	int ile=0;
	int k=0;
	int sprawdz=0;
	int x=0;
	int y=0;
	int tabPOZIOM[28];
	int tabPION[28];
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE-a;j++)
		{
			sprawdz=0;
			for(int k=0;k<a;k++)
			{
				if(tab[i][j+k]==tabW[k])
				{
					sprawdz++;
				//	printf("gdzie znaleziono: x,y %i %i\n",j,y);
				//	printf("sprawdz = %i\n", sprawdz);
				}
				if(sprawdz==a)
				{
					ile++;
					tabPOZIOM[x++]=i;
					tabPOZIOM[x++]=j;
				//	y=i;
				//	x=j;
				//	printf("\n\n(x, y)=(%i, %i)\n",x,y);
				}
			}
		}
	}
	
	//pionowo, ale tylko w dol, patrz program.
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE-a;j++)
		{
		sprawdz=0;
			for(int k=0;k<a;k++)
			{
				if(tab[j+k][i]==tabW[k])
				{
					sprawdz++;
				//	printf("gdzie znaleziono: x,y %i %i\n",j,y);
				//	printf("sprawdz = %i\n", sprawdz);
				}
				if(sprawdz==a)
				{
					ile++;
					tabPION[y++]=i;
					tabPION[y++]=j;
				//	y=i;
				//	x=j;
				//	printf("\n\n(x, y)=(%i, %i)\n",x,y);
				}
			}
		}
	}
	
	//printf("ile?: %i\n", ile);
	printf("%i\n",ile);
	for(int i=0;i<x-1;i+=2)
	{
		printf("2: (%i %i)\n", tabPOZIOM[i+1], tabPOZIOM[i]);
	}
	for(int i=0;i<y-1;i+=2)
	{
		printf("1: (%i %i)\n", tabPION[i+1],tabPION[i]);
	}
	
	return 0;
}
