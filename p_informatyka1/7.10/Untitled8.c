/*
Napisz funkcj�, kt�ra przyjmuje trzy argumenty liczbowe, a nast�pnie sprawdza, czy wszystkie warto�ci s� r�wne. 
Funkcja powinna zwraca� warto�� logiczn� prawdy lub fa�szu. 
Napisz program, kt�ry zapyta u�ytkownika o trzy liczby, a nast�pnie wywo�a powy�sz� funkcj�, 
przekazuj�c wpisane liczby jako jej argumenty. 
Je�eli funkcja zwr�ci�a logiczn� prawd�, wy�wietl s�owo TAK, w przeciwnym razie wy�wietl NIE.
*/

#include <stdio.h>

int funkcja(int a, int b, int c)
{
	if(a==b)
	{
		if(a==c)
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
	printf("Podaj trzy liczby: \n");
	int i,j,k;
	scanf("%i %i %i", &i,&j,&k);
	
	if(funkcja(i,j,k)==1)
		printf("TAK");
	else
		printf("NIE");
	
	return 0;
	}

