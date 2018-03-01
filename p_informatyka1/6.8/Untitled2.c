/*
Napisz program, kt�ry wczyta od u�ytkownika tablic� o wymiarze 15�15, wype�nion� warto�ciami z zakresu <0, 30), 
a nast�pnie utworzy tablic� wynikow�, w kt�rej warto�ci z tablicy wej�ciowej zostan� zast�pione ilo�ci� ich wyst�pie�.
*/


#include <stdio.h>
#define SIZE 15


int main()
{
	int liczba;
	int tab[15][15];
	int tabw[15][15];
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			scanf("%i", &liczba);
			if(liczba>=0&&liczba<30)
			tab[i][j]=liczba;
		}
	}
	printf("\n\n\n");
	liczba=0;
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			for(int k=0;k<SIZE;k++)
			{
				for(int l=0;l<SIZE;l++)
				{
					if(tab[i][j]==tab[k][l])
					{
						liczba++;
					}
				}
			}
			tabw[i][j]=liczba;
			liczba=0;
		}
	}
	
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			printf("%4i ", tabw[i][j]);
		}
		printf("\n");
	}
	return 0;	
}
