/*
Napisz program, kt�ry pobiera tekst od u�ytkownika, a nast�pnie wy�wietla jego d�ugo��. 
Do wyznaczania d�ugo�ci wykorzystaj fakt, �e 
teksty w j�zyku C/C++ zapisywane s� w formacie ASCII 
(https://en.wikipedia.org/wiki/Null-terminated_string). 
Sprawd�, czy wyniki dzia�ania Twojej metody wyznaczania d�ugo�ci s� zgodne z wynikiem funkcji strlen().
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
