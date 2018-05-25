/*
Napisz program, który pobierze od uzytkownika poprawne wyrazenie nawiasowe, np.: 
(()(())).
Program ma obliczyc najwieksza glebokosc zagniezdzenia w obrebie tego wyrazenia. 
Program ma zwrócic najwieksza glebokosc oraz indeks komórki (oddzielone spacjami), w którym znajduje sie pierwszy nawias otwierajacy tego wyrazenia. 
Jezeli jest kilka wyrazen o takim samym zagniezdzeniu program ma zwrócic indeks poczatkowy dla kazdego z nich
*/
//	(()(()))
#include <stdio.h>


int main()
{
	char tab[50];
	printf("Wprowadz wyrazenie nawiasowe: \n");
    gets(tab);
   	int licznik=0;
    int najglebszy=0;
    int tabA[50];
    for(int i=0;i<50;i++)
    {
    	if(tab[i]=='(')
		{
		licznik++;
			if(licznik>najglebszy)
			{
				najglebszy=licznik;
			}
		}
		if(tab[i]==')')
		{
			licznik--;
		}	
	}
	printf("%i: ", najglebszy);
	licznik=0;
	int n=0;
	for(int j=0;j<50;j++)
 	{
 		if(tab[j]=='(')
		{
		licznik++;
			if(licznik==najglebszy)
			{
				tabA[n++]=j-najglebszy+1; //indeks z najwiekszym zagniezdzeniem - poczatek
			}
		}
		if(tab[j]==')')
		{
			licznik--;
		}
	}
	
	for(int k=0;k<n;k++)
	{
		printf("%i ",tabA[k]);
	}
	
	
 
	return 0;   
}
