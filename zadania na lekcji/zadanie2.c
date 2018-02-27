#include <stdio.h>
#include <ctype.h>
#include <time.h>
#define R 10

/* void losuj(tab[R][30])
{
	int i,j;
	srand(time(NULL));
	for(i=0;i<R;i++)
	{
		for(j=0;j<30;j++)
		{
			tab[i][j]=rand()%9;
		}
	}
} */

int licz(char tab[R][5])
{
	int suma=0;
	int i,j;
	for(i=0;i<R;i++)
	{
		for(j=0;j<5;j++)
		{
			if(islower(tab[i][j])) suma+=1;
		}
	}
	return suma;
}

//strcpy(s1,s2) drugi argument zapisuje do tego pierwszego STRINGI 
//strcmp(s1,s2) porownywanie dwoch stringow, zwraca 0 jezeli sa takie same stringi, s1>s2 to zwaraca 1
//Ala s1
//ala s2
// zwroci -1.
// ala ala -> zwroci 0
// 

void sort(char tab[R][5])
{
	int i,j;
	char temp;
	for(i=0;i<R;i++)
	{
		for(j=0;j<5;j++)
		{
			if(tab[i][j]<tab[i][j+1])		// 1 2 3 4
			{								// 1 2 3 4
				temp=tab[j];
				tab[j]=tab[j+1];
				tab[j+1]=temp;
			}
		}
	}
}

void wypisz(char tab[R][5])
{
	int i,j;
	for(i=0;i<R;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%c", tab[i][j]);
		}
	}
}

int main()
{
	char tab[R][5];
	int i,j;
	for(i=0;i<R;i++)
	{
		for(j=0;j<5;j++)
		fgets(tab[i],5,stdin);
	}
	
	licz(tab);
	
	return 0;
}
