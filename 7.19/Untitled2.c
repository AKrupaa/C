/*
Napisz program sprawdzaj�cy tzw. hipotez� Goldbacha: 
ka�da liczba parzysta mo�e zosta� przedstawiona jako suma dw�ch liczb pierwszych. 
Hipotez� nale�y sprawdzi� dla liczb z przedzia�u <x1, x2>. Zadanie zrealizuj za pomoc� funkcji
int goldbach(int x);
kt�ra wy�wietli wszystkie pary liczb pierwszych dla liczby parzystej x. 
Funkcja powinna zwr�ci� 0, je�eli nie uda�o si� wyznaczy� ani jednej pary. 
W przeciwnym razie powinna zwr�ci� 1.
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

int goldbach(int x)
{
	//x=parzysta liczba;
	for(int i=2;i<x;i++)
	{
		for(int j=i;j<x;j++)
		{
			if(i+j==x&&czy_pierwsza(i)&&czy_pierwsza(j))
			{
				return 1;
			}
		}
	}
	return 0;
}

void wypisz(int x)
{
	//x=parzysta liczba;
	for(int i=2;i<x;i++)
	{
		for(int j=i;j<x;j++)
		{
			if(i+j==x&&czy_pierwsza(i)&&czy_pierwsza(j))
			{
				printf("%4i %4i l.p.:%4i \n", i,j,x);
			}
		}
	}
}


int main()
{
	int min;
	int max;
	printf("Wprowadz przedzial w ktorym program sprawdzi hipoteze Goldbacha: <min, max> \n");
	printf("Wprowadz min: ");
	scanf("%i",&min);
	printf("Wprowadz max: ");
	scanf("%i",&max);
	if(min<2)
	min=2;
	printf("\n");
	for(int i=min;i<=max;i++)
	{
		if(i%2==0&&goldbach(i)==1)
		{
			wypisz(i);	
		}
		if(i%2==0&&goldbach(i)!=1)
		{
			printf("brak par dla l.p.:%2i \n", i);			
		}
	
	}	
	
	return 0;
}
