/*
Napisz program, który pobierze od u¿ytkownika ³añcuch tekstowy sk³adaj¹cy siê wy³¹cznie z liter i bia³ych znaków 
oraz przesuniêcie kodowe. 
Program ma zaszyfrowaæ pobrany tekst wykorzystuj¹c szyfr Cezara (https://pl.wikipedia.org/wiki/Szyfr_Cezara) 
i wypisaæ go na konsoli. D³ugoœæ ci¹gu wejœciowego nie przekroczy 1000 znaków.
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
