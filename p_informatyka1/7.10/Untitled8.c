/*
Napisz funkcjê, która przyjmuje trzy argumenty liczbowe, a nastêpnie sprawdza, czy wszystkie wartoœci s¹ równe. 
Funkcja powinna zwracaæ wartoœæ logiczn¹ prawdy lub fa³szu. 
Napisz program, który zapyta u¿ytkownika o trzy liczby, a nastêpnie wywo³a powy¿sz¹ funkcjê, 
przekazuj¹c wpisane liczby jako jej argumenty. 
Je¿eli funkcja zwróci³a logiczn¹ prawdê, wyœwietl s³owo TAK, w przeciwnym razie wyœwietl NIE.
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

