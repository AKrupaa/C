/*
Napisz program, kt�ry pobierze od u�ytkownika �a�cuch tekstowy sk�adaj�cy si� wy��cznie z liter i bia�ych znak�w 
oraz przesuni�cie kodowe. 
Program ma zaszyfrowa� pobrany tekst wykorzystuj�c szyfr Cezara (https://pl.wikipedia.org/wiki/Szyfr_Cezara) 
i wypisa� go na konsoli. D�ugo�� ci�gu wej�ciowego nie przekroczy 1000 znak�w.
*/

#include <stdio.h>
#include <string.h>

int main()
{
	printf("Wprowadz ciag znakow: \n");
	char tab[1000];
	gets(tab);
	printf("Wprowadz przesuniecie kodowe: ");
	int przesuniecie;
	scanf("%i",&przesuniecie);
	for(int i=0;i<strlen(tab);i++)
	{
	//	printf("%c -> ",tab[i]);
		tab[i]=tab[i]+przesuniecie;
	//	printf("%c\n",tab[i]);
	}
	
		printf("%s",tab);
	
	
	return 0;
}
