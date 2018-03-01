/* Napisz program, który sprawdza czy liczba ca³kowita podana z klawiatury jest liczb¹ pierwsz¹. 
Program powinien umo¿liwiæ u¿ytkownikowi wpisanie liczby, a nastêpnie 
wyœwietliæ s³owo “TAK”, gdy liczba jest pierwsza lub “NIE” w przeciwnym wypadku. 
Je¿eli podana zostanie liczba mniejsza ni¿ 2 (wliczaj¹c w to liczby ujemne), 
program powinien wyœwietliæ s³owo “Error”. 
Liczba pierwsza to taka, która dzieli siê ca³kowicie tylko przez 1 oraz przez sam¹ siebie. 
PodpowiedŸ: resztê z dzielenia a przez b wyznacza wyra¿enie (a % b).*/

#include <stdio.h>

int main()
{
	int liczba;
	int i;
	int suma=0;
	printf("Program sprawdza czy liczba jest liczba pierwsza\nWprowadz liczbe: ");
	scanf("%i",&liczba);
	for(i=1;i<=liczba;i++)
	{
		if(liczba%i==0)
		{
			//printf("%i modulo %i=0\n",liczba,i);
			suma+=1;
		}
	}
	if(liczba>1)
	{
		if(suma==2)
		{
			printf("TAK");
		}
		else
		{
			printf("NIE");
		}
	}
	else
	{
		printf("Error");
	}

	

	return 0;
}
