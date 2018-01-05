/*
Napisz program, który wczyta od u¿ytkownika macierz o wymiarze 5×5. 
Program ma odnaleŸæ we wczytanej macierzy wszystkie pary liczb pierwszych s¹siaduj¹ce ze sob¹. 
Program ma zwróciæ liczbê znalezionych takich par, 
a nastêpnie w oddzielnych liniach ich wspó³rzêdne 
(w postaci numer wiersza, numer kolumny pierwszej liczby i numer wiersza numer kolumny drugiej liczby). 
Do sprawdzenia czy liczba jest pierwsza wykorzystaj funkcjê z zadania 7.15.
*/

#include <stdio.h>
#define SIZE 5

int czy_pierwsza(int a)
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

int main()
{
	int tab[5][5];
	int liczba;
	int ile=0;
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			scanf("%i",&liczba);
			tab[i][j]=liczba;
		}
	}
	
	//szukam par w poziomie
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE-1;j++)
		{
			if(czy_pierwsza(tab[i][j]))
			{
				if(czy_pierwsza(tab[i][j+1]))
				{
					ile++;
				}
			}
		}
	}
	
	//szukam par w pionie
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE-1;j++)
		{
			if(czy_pierwsza(tab[j][i]))
			{
				if(czy_pierwsza(tab[j+1][i]))
				{
					ile++;
				}
			}
		}
	}
	
	//szukam par na skos gora lewa -> dol prawo
	for(int i=0;i<SIZE-1;i++)
	{
		for(int j=0;j<SIZE-1;j++)
		{
			if(czy_pierwsza(tab[i][j]))
			{
				if(czy_pierwsza(tab[i+1][j+1]))
				{
					ile++;
				}
			}
		}
	}
	
	
	//szukam par na skos gora prawa -> dol lewa
	for(int i=0;i<SIZE-1;i++)
	{
		for(int j=0;j<SIZE-1;j++)
		{
			if(czy_pierwsza(tab[i][j+1]))
			{
				if(czy_pierwsza(tab[i+1][j]))
				{
					ile++;
				}
			}
		}
	}
	
	printf("\n\n%i\n", ile);
	
		//szukam par w poziomie
		//wypisz pary
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE-1;j++)
		{
			if(czy_pierwsza(tab[i][j]))
			{
				if(czy_pierwsza(tab[i][j+1]))
				{
					printf("%i %i %i %i\n", i, j, i, j+1);
				}
			}
		}
	}
	
	//szukam par w pionie
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE-1;j++)
		{
			if(czy_pierwsza(tab[j][i]))
			{
				if(czy_pierwsza(tab[j+1][i]))
				{
					printf("%i %i %i %i\n", j, i, j+1, i);
				}
			}
		}
	}
	
	//szukam par na skos gora lewa -> dol prawo
	for(int i=0;i<SIZE-1;i++)
	{
		for(int j=0;j<SIZE-1;j++)
		{
			if(czy_pierwsza(tab[i][j]))
			{
				if(czy_pierwsza(tab[i+1][j+1]))
				{
					printf("%i %i %i %i\n", i,j,i+1,j+1);
				}
			}
		}
	}
	
	
	//szukam par na skos gora prawa -> dol lewa
	for(int i=0;i<SIZE-1;i++)
	{
		for(int j=0;j<SIZE-1;j++)
		{
			if(czy_pierwsza(tab[i][j+1]))
			{
				if(czy_pierwsza(tab[i+1][j]))
				{
					printf("%i %i %i %i\n", i,j+1,i+1,j);
				}
			}
		}
	}
	
	return 0;
}
