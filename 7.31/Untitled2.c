/*
Napisz program, który wczyta od uzytkownika macierz o wymiarze 5×5. 
Program ma odnalezc we wczytanej macierzy wszystkie pary liczb pierwszych sasiadujace ze soba. 
Program ma zwrócic liczbe znalezionych takich par, 
a nastepnie w oddzielnych liniach ich wspólrzedne 
(w postaci numer wiersza, numer kolumny pierwszej liczby i numer wiersza numer kolumny drugiej liczby). 
Do sprawdzenia czy liczba jest pierwsza wykorzystaj funkcje z zadania 7.15.
*/

#include <stdio.h>
#define SIZE 5

int czy_pierwsza(int a)
{
	if(a>0)
	{
		int flaga=0;
		int ile=0;
		for(int i=1;i<=a&&flaga==0;i++)
		{
			if(a%i==0)
			{
				ile++;
			}
			
			if(ile>2)
			flaga=1;
		}
		
		if(ile==2)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}	
}



int main()
{
	int tab[5][5];
	int liczba;
	int a=0;
	int ile=0;
	
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			scanf("%i", &liczba);
			tab[i][j]=liczba;
		}
	}
	
	
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			printf("%3i ",tab[i][j]);
		}
		printf("\n");
	}
	
	//prawa - lewa
	
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE-1;j++)
		{	
			if(czy_pierwsza(tab[i][j])&&czy_pierwsza(tab[i][j+1]))
			{
				printf("%i %i  %i %i\n",i,j,i,j+1);
				ile++;
			}
		}
	}

	//na skos gora-lewa <=> dol-prawa
		
	for(int i=0;i<SIZE-1;i++)
	{
		for(int j=0;j<SIZE-1;j++)
		{	
			if(czy_pierwsza(tab[i][j])&&czy_pierwsza(tab[i+1][j+1]))
			{
				printf("%i %i  %i %i\n",i,j,i+1,j+1);
				ile++;
			}
		}
	}
	
	//na skos gora-prawa <=> dol-lewa		//zrob
	for(int i=0;i<SIZE-1;i++)
	{
		for(int j=0;j<SIZE-1;j++)
		{	
			if(czy_pierwsza(tab[i][j])&&czy_pierwsza(tab[i+1][j+1]))
			{
				printf("%i %i  %i %i\n",i,j,i+1,j+1);
				ile++;
			}
		}
	}
	
	
	
	
	printf("\n");
	printf("Znaleziono: %i", ile);
	
	return 0;
}
