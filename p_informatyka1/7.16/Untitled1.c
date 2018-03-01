/*
Napisz program szukaj�cy liczb bli�niaczych w zadanym przedziale <x1, x2>. 
Liczby bli�niacze to dwie liczby pierwsze, r�ni�ce si� o 2 (np. 3 i 5 czy 29 i 31). Utw�rz w tym celu funkcj�:
int czy_blizniacze(int a, int b);
kt�ra zwr�ci 1 w przypadku, gdy obie liczby s� pierwsze. Wykorzystaj funkcj� czy_pierwsza z zadania 7.15.
*/

#include <stdio.h>


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
			return 1;
		else
			return 0;
}

int czy_blizniacze(int a, int b)
{
	if(a+2==b)
	{
		if(czy_pierwsza(a)==1&&czy_pierwsza(b)==1)
			return 1;
		else
			return 0;
	}
}


int main()
{
	int min;
	int max;
	printf("Wprowadz przedzial w ktorym program ma znalezc liczby pierwsze bliznacze: <min, max> \n");
	printf("Wprowadz min: ");
	scanf("%i",&min);
	printf("Wprowadz max: ");
	scanf("%i",&max);
	if(min<0)
	min=2;
	
	for(int i=min;i<max-2;i++)
	{
		if(czy_blizniacze(i,i+2)==1)
		printf("%i %i\n", i, i+2);
	}
	return 0;
}
