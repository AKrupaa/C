/*
Napisz program, kt�ry pobierze od u�ytkownika �a�cuch tekstowy zawieraj�cy wy��cznie ma�e i wielkie litery �aci�skie. 
W napisie wynikowym ka�da wielka litera ma zosta� zast�piona 3 swoimi kopiami. 
Program ma zwr�ci� d�ugo�� �a�cuchu wynikowego, a w nast�pnej linii sam ci�g wynikowy wypisany od ko�ca. 
D�ugo�� ci�gu wej�ciowego nie przekroczy 1000 znak�w, a d�ugo�� ci�gu wynikowego nie przekroczy 2000 znak�w.
*/


#include <stdio.h>
#include <string.h>


int main()
{
	const int max=1000;
	char tab[max];
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
	
	for(int q=0;q<i;q++)
	printf("%c", tab[q]);
	
	printf("\n");	
	
	const int maxA=2000;
	char tabA[maxA];
	int p=0;
	char wielka;
	for(int w=i;w>=0;w--)
	{
		if(tab[w]>=65&&tab[w]<=90)
		{
			for(int e=0;e<3;e++)
			tabA[p++]=tab[w];//printf("%c",tab[w]);
		}
		if(tab[w]>=97 && tab[w]<=122 || tab[w]==' ')
		{
			tabA[p++]=tab[w];//printf("%c", tab[w]);
		}
	}
	printf("Dlugosc: %i\n",strlen(tabA)); //albo zamiast strlen wpisac p, na to samo wyjdzie...
	for(int t=0;t<p&&strlen(tabA)<2000;t++)
		printf("%c",tabA[t]);
	
	return 0;
}
