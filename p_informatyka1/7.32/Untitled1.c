/*
Napisz program, który wczyta od u¿ytkownika macierz o wymiarze 5×5. 
Program ma odnaleŸæ we wczytanej macierzy kwadrat o wymiarach 3×3 zawieraj¹cy w sobie najwiêcej liczb pierwszych. 
Program ma wypisaæ liczbê znalezionych kwadratów, a nastêpnie 
w oddzielnych wierszach wspó³rzêdne œrodkowego elementu znalezionego kwadratu 
(numer wiersza i numer kolumny). 
Je¿eli bêdzie ich wiêcej ni¿ jeden, wspó³rzêdne kolejnych kwadratów maj¹ zostaæ wypisane w kolejnych liniach.
W przypadku nie wyst¹pienia liczby pierwszej we wczytanej macierzy program ma wypisaæ wartoœæ 0. 
Do sprawdzenia czy liczba jest pierwsza wykorzystaj funkcjê z zadania 7.15.
*/

#include <stdio.h>
#include <stdlib.h>
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
	system("cls");
	// czy jest chociaz jakas liczba pierwsza?
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			if(czy_pierwsza(tab[i][j]))
			ile++;
		}
	}
	if(ile==0)
	{
		printf("\nNie ma liczb pierwszych - wyjscie z programu."); return 0;
	}
	ile=0;
	
	//kwadraty 3x3 - szukam najwiekszej ilosci liczb pierwszych
	int ileP=0;
	for(int i=0;i<SIZE-2;i++)
	{
		for(int j=0;j<SIZE-2;j++)
		{
			//3x3
			for(int q=i;q<i+3;q++)
			{
				for(int w=j;w<j+3;w++)
				{
					if(czy_pierwsza(tab[q][w]))
					{
						ile++;
						if(ileP<ile)
						ileP=ile;
					}
				}
			}
			ile=0;
		}
	}
	
	//kwadraty 3x3 - ile jest kwadratow 3x3 o danej liczbe liczb pierwszych?
	int ileK=0;
	for(int i=0;i<SIZE-2;i++)
	{
		for(int j=0;j<SIZE-2;j++)
		{
			//3x3
			for(int q=i;q<i+3;q++)
			{
				for(int w=j;w<j+3;w++)
				{
					if(czy_pierwsza(tab[q][w]))
					{
						ile++;
						if(ileP==ile)
						ileK++;
					}
				}
			}
			ile=0;
		}
	}

	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			printf("%4i",tab[i][j]);
		}
		printf("\n");
	}
	
	//printf("ileP=%i\n",ileP);
	printf("%i\n",ileK);


	//znajdz srodek kwadratu 3x3 z najwieksza liczba l.p.
	int flaga=0;
	for(int p=0;p<ileK;p++)
	{
		for(int i=0;i<SIZE-2;i++)
		{
			for(int j=0;j<SIZE-2;j++)
			{	
				//3x3
				for(int q=i;q<i+3;q++)
				{
					for(int w=j;w<j+3;w++)
					{
						if(czy_pierwsza(tab[q][w]))
						{
							ile++;
							if(ileP==ile)
							{
								flaga=1;
							}
						}
					}
				}
				if(flaga==1)
				{
					printf("%i %i\n", i+1,j+1);
				}
				ile=0;
				flaga=0;
			}
		}	
	}
	
	return 0;
}
