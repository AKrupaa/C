/*
Dana jest tablica: char tekst[] = {'T','o',' ','j','e','s','t',' ','t','e','k','s','t','\x0'}; 
Wyœwietl elementy tej tablicy jako liczby oraz znaki. Wykorzystaj funkcje putc oraz printf z symbolem formatuj¹cym %c.
*/

#include <stdio.h>

int main()
{
	char tekst[] = {'T','o',' ','j','e','s','t',' ','t','e','k','s','t','\x0'};
	
	int rozmiar;
	int i=0;
	do
	{
		rozmiar+=1;
		i++;
	}
	while(tekst[i]!='\x0');
//		printf("Rozmiar = %i", rozmiar); //rozmiar =13;


	//putc(skad, stdout);
	for(int q=0;q<rozmiar;q++)
		putc(tekst[q],stdout);
		
	printf("\n\n");
	
	for(int q=0;q<rozmiar;q++)
		printf("%c",tekst[q]);
		
	return 0;
}
