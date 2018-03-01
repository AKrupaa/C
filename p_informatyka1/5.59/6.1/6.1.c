/*
Zadeklaruj tablice o wymiarach 11×11. 
Napisz petle wypelniajaca ja tak, aby zawierala ona tabliczke mnozenia. 
Wynik wyswietl na ekranie w formie tabelarycznej: wartosci musza byc ulozone w wiersze i kolumny. 
Mnozenie rozpoczynaj od zera.
*/
#include <stdio.h>

int main()
{
	int tab[11][11];
	for(int x=0;x<11;x++)
	{
		for(int y=0;y<11;y++)
		{
			tab[x][y]=x*y;
		}
	}
	
		for(int x=0;x<11;x++)
	{
		for(int y=0;y<11;y++)
		{
			printf("%4d| ",tab[x][y]);
			if(y==10) printf("\n");
		}
	}
	
	return 0;
}
