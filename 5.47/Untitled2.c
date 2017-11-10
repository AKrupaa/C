/*
Napisz program, który pobiera tekst od u¿ytkownika, a nastêpnie wyœwietla jego d³ugoœæ. 
Do wyznaczania d³ugoœci wykorzystaj fakt, ¿e 
teksty w jêzyku C/C++ zapisywane s¹ w formacie ASCII 
(https://en.wikipedia.org/wiki/Null-terminated_string). 
SprawdŸ, czy wyniki dzia³ania Twojej metody wyznaczania d³ugoœci s¹ zgodne z wynikiem funkcji strlen().
*/

#include <stdio.h>
#include <string.h>
int main()
{
	char txt[50];
	
	printf("Wprowadz tekst:");
    gets(txt);
    int x=0;
    int dlugosc;
    do
    {
    	dlugosc++;
    	x++;
	}
	while(txt[x]!='\0');
	dlugosc--;
	
	printf("Wprowadzony tekst sklada sie z: %d znakow\n", dlugosc); //moje
    printf("Wprowadzony tekst sklada sie z: %d znakow\n", strlen(txt));	//funkcja
   
	return 0;
}
