/*
Napisz program, który pobierze od u¿ytkownika wyra¿enie nawiasowe, np.: (()(())). 
Program ma sprawdziæ czy podane wyra¿enie jet poprawne czy nie. 
Program ma wypisaæ napis „Poprawny” je¿eli uzna, ¿e wprowadzone wyra¿enie jest poprawne lub 
„Niepoprawny” w przeciwnym przypadku.
*/

#include <stdio.h>
#include <string.h>

int main()
{
	int znak=0;
	char tab[100];
	printf("Wprowadz wyrazenie nawiasowe: np. ()(())\n");
	gets(tab);
	for(int i=0;i<strlen(tab);i++)
	{
		if(tab[i]=='(')
		znak++;
		if(tab[i]==')')
		znak--;
	}
	if(znak==0)
	printf("Poprawny");
	else
	printf("Niepoprawny");
	
	return 0;
}
