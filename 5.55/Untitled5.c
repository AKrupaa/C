/*
Napisz program, który pobierze od u¿ytkownika ³añcuch tekstowy zawieraj¹cy wy³¹cznie cyfry 1..9 oraz znaki “+” i “-”. 
Program ma wykonaæ podane dzia³ania i wypisaæ w konsoli ich wynik. D³ugoœæ ci¹gu wejœciowego nie przekroczy 1000 znaków.
*/

#include <stdio.h>
#include <string.h>


int main()
{
	const int max=1000;
	char tab[1000];
	int suma = 0;
	int i=0;
	char znak;
	printf("Wprowadz tekst zawierajacy wylacznie liczby 1..9 oraz znaki + i -\n");
	printf("ENTER przerywa wczytywanie tekstu\n");
	scanf("%c", &znak);
	if((znak>=49 && znak<=57) || (znak==45 || znak==43)) //49-57 to liczby ; 45 to - ; 43 to + ;
	tab[i++]=znak;
	if(znak=='\n')
	printf("Wcisnieto na poczatku ENTER. Nastepuje wyjscie z programu");
	while(i<max&&znak!='\n')
	{
		scanf("%c", &znak);
		if((znak>=49 && znak<=57) || (znak==45 || znak==43))
		tab[i++]=znak;
	}	
	//wczytywanie /\ 
	
	int liczba=0;
	int liczba1;
	int liczba2;
	suma=tab[0]-48;
		for(int q=0;q<i;q++)
		{
			if(tab[q]==43)
			{
				liczba1=tab[q+1]-48;
				suma=suma+liczba1;
			}
			if(tab[q]==45)
			{
				liczba2=tab[q+1]-48;
				suma=suma-liczba2;
			}
		}
	printf("%i",suma);
	return 0;	
}
