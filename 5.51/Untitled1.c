/*
Napisz program, który pobierze od u¿ytkownika ³añcuch tekstowy zawieraj¹cy wy³¹cznie ma³e litery ³aciñskie oraz cyfry 1..9. 
Cyfra musi poprzedzaæ literê i oznacza liczbê powtórzeñ litery, która za ni¹ nastêpuje. 
Program ma zwróciæ d³ugoœæ ³añcuchu wynikowego, a w nastêpnej linii sam ci¹g wynikowy wypisany od koñca. 
D³ugoœæ ci¹gu wejœciowego nie przekroczy 1000 znaków, a d³ugoœæ ci¹gu wynikowego nie przekroczy 2000 znaków.
*/

#include <stdio.h>
#include <string.h>

int main()
{
	const int max=1000;
	char tab[1000];
	int i=0;
	char znak;
	printf("Wprowadz tekst zawierajacy wylacznie male litery lacinskie oraz cyfry 1..9\n");
	printf("ENTER przerywa wczytywanie tekstu\n");
	scanf("%c", &znak);
	if(znak>48 && znak<=57 || znak>=97 && znak<=122)
	tab[i++]=znak;
	if(znak=='\n')
	printf("Wcisnieto na poczatku ENTER. Nastepuje wyjscie z programu");
	while(i<max&&znak!='\n')
	{
		scanf("%c", &znak);
		if(znak>48 && znak<=57 || znak>=97 && znak<=122)
		tab[i++]=znak;
	}	
	
	for(int q=0;q<i;q++)
	printf("%c", tab[q]);
	
	printf("\n");	
	
	//const int maxA=2000;
	//int tabA[maxA];
	int p=0;
	int liczba;
	int ile=0;
	for(int w=i;w>=0&&ile<2000;w--)
	{
		if(tab[w]>=97 && tab[w]<=122)
		{
			printf("%c",tab[w]);
			ile++;
			if(tab[w-1]>48 && tab[w-1]<=57)
			{
				
				liczba=tab[w-1]-32-16;
				for(int e=1;e<liczba;e++)
				{
					ile++;
					printf("%c",tab[w]);
				}
			}
			
		}
	}
	printf("\ndlugosc: %i", ile);
	return 0;
}
