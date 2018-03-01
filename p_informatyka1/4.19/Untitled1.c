/* Wyznacz i wyœwietl dwie sumy: liczb parzystych oraz nieparzystych, wpisywanych przez u¿ytkownika. 
Liczby wczytuj tak d³ugo, a¿ u¿ytkownik nie poda -1. */

#include <stdio.h>

int main()
{
	int i=0;
	int liczba;
	int sumaP=0;
	int sumaN=0;
	printf("Program wyznacza sume liczb osobno: parzystych i nieparzystych.\n");
	printf("Program przerywa dzialanie jezeli wprowadzisz -1\n");
	
	
	do
	{
		printf("Wprowadz liczbe%i: ",i+1);
		scanf("%i",&liczba);
		if(liczba!=-1)
		{
			if(liczba%2==0)
			{
				sumaP=sumaP+liczba;
			}
			if(liczba%2!=0)
			{
				sumaN=sumaN+liczba;
			}
			i++;
		}
		else
		{
			printf("Wprowadzono -1. Program przerywa dzialanie\n");
		}
	}
	while(liczba!=-1);
	
	printf("\n Suma l. nieparzystych= %i\n Suma liczb parzystych= %i", sumaN,sumaP);
	return 0;
}
