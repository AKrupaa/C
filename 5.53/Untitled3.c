/*
Napisz program, kt�ry pobierze od u�ytkownika �a�cuch tekstowy zawieraj�cy wy��cznie ma�e i wielkie litery �aci�skie.
Program ma zwr�ci� po spacji liczb� najd�u�szych s��w w przekazanym napisie, d�ugo�� tych s��w, 
nast�pnie w kolejnych liniach maj� zosta� wypisane znalezione s�owa o tej d�ugo�ci rozpoczynaj�c od ostatniego.

Uwaga: zak�adamy, �e przekazany napis zawiera co najmniej 1 s�owo 
(czyli nie jest pusty ani nie zawiera np. wy��cznie spacji). 
D�ugo�� ci�gu wej�ciowego nie przekroczy 1000 znak�w.
*/

#include <stdio.h>
#include <string.h>


int main()
{
	const int max=1000;
	char tab[1000];
	int i=0;
	char znak;
	printf("Wprowadz tekst zawierajacy wylacznie male i wielkie litery lacinskie\n");
	printf("ENTER przerywa wczytywanie tekstu\n");
	scanf("%c", &znak);
	if(znak>=65 && znak<=90 || znak>=97 && znak<=122 || znak==' ')
	tab[i++]=znak;
	if(znak=='\n')
	printf("Wcisnieto na poczatku ENTER. Nastepuje wyjscie z programu");
	while(i<max&&znak!='\n')
	{
		scanf("%c", &znak);
		if(znak>=65 && znak<=90 || znak>=97 && znak<=122 || znak==' ')
		tab[i++]=znak;
	}	
	//wczytywanie /\
	
//	for(int z=0;z<i;z++)
//	printf("%c", tab[z]);
	
	//printf("\n");
	
	int najwiekszy=0;
	int licznik=0;
	int ile_tych_wyrazow=0;
	for(int q=0;q<i;q++)
	{
		if( tab[q]!=' ' && tab[q]>=65 && tab[q]<=90 || tab[q]>=97 && tab[q]<=122)
		{
			licznik++;
				if(licznik>najwiekszy)
				{
					najwiekszy=licznik;
				}
		}
		if(tab[q]==' ')
		licznik=0;
	}
	
	licznik=0;
	char tabzwyrazami[1000];
	int p=0;
	int kiedy=0;
	for(int w=0;w<i;w++)
	{
		if( tab[w]!=' ' && tab[w]>=65 && tab[w]<=90 || tab[w]>=97 && tab[w]<=122)
		{
			licznik++;
				if(licznik==najwiekszy)
				{
					ile_tych_wyrazow++;
				//	printf("najwiekszy ID: %i\n", w);
					for(int e=w;e>=0&&tab[e]!=' ';e--)
					{
						tabzwyrazami[p++]=tab[e];
					}
					tabzwyrazami[p++]=' ';
					
				}
		}
		if(tab[w]==' ')
		{
			licznik=0;
		}
		
	}
	
	printf("%i %i",ile_tych_wyrazow,najwiekszy);
	for(int z=p;z>=0;z--)
	{
		printf("%c", tabzwyrazami[z]);
		if(tabzwyrazami[z]==' ')
		printf("\n");
	}
		

	return 0;	
}
