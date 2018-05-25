/*
Napisa� funkcj� do obliczania rozmiaru plik�w. 
Jako argument funkcja powinna przyjmowa� �cie�k� dost�pu lub wska�nik do pliku. 
*/

#include <stdio.h>

int dlugosc(char *wsksciezki)
{
	FILE *plik;
	if((plik=fopen(wsksciezki,"r"))==NULL)
		return 0;

	
	fseek(plik,0,SEEK_END);
	int rozmiar=ftell(plik);	
	
	fclose(plik);
	
	return rozmiar;
}

int main()
{
	printf("Podaj sciezke do pliku: ");
	char sciezka[40];
	scanf("%s",sciezka);
	char *wsciezka;
	wsciezka=sciezka;
	
	printf("%i", dlugosc(wsciezka));

	
	return 0;
}
