/*
Napisz program, kt�ry wy�wietla wszystkie liczby pierwsze w zadanym przedziale <x1, x2>, wprowadzonym z klawiatury. 
Do sprawdzenia, czy dana liczba jest pierwsza, napisz funkcj� o nast�puj�cej deklaracji:
...
Funkcja powinna zwr�ci� 1, je�eli a jest liczb� pierwsz�, 0 w przeciwnym wypadku. 
Uwaga: zak�adamy, �e liczby ujemne nie s� ani pierwsze, ani z�o�one.
*/

#include <stdio.h>

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
}

int main()
{
	int min;
	int max;
	printf("Wprowadz przedzial w ktorym program ma znalezc liczby pierwsze: <min, max> \n");
	printf("Wprowadz min: ");
	scanf("%i",&min);
	printf("Wprowadz max: ");
	scanf("%i",&max);
	for(int i=min;i<max;i++)
	{
		if(czy_pierwsza(i)==1)
		{
			printf("%i ",i);
		}
	}
	
	return 0;
}
