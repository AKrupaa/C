/*
Zmodyfikowaæ program z Zadania 3 tak, aby kopiowanie odbywa³o siê od koñca pliku 
(ostatni znak pliku Ÿród³owego powinien byæ pierwszym znakiem pliku docelowego). 
W programie umieœciæ funkcjê kopiuj¹c¹, przyjmuj¹c¹ jako argumenty œcie¿ki do plików: Ÿród³owego i docelowego. 
*/

#include <stdio.h>

int kopiuj(char *szrodlo, char *scel)
{
	FILE *zrodlo;
	FILE *cel;
	
	if((zrodlo=fopen(szrodlo,"r"))==NULL) return -1;
	if((cel=fopen(scel,"w"))==NULL) return -2;
	fseek(zrodlo,0,SEEK_END);
	int koniec=ftell(zrodlo);
	koniec--; //rzeczywisty rozmiar pliku
	char ch;
	for(;koniec>=0;koniec--)
	{
		fseek(zrodlo,koniec,SEEK_SET);
		ch=fgetc(zrodlo);
		if(ch==EOF) break;
		fprintf(cel,"%c",ch);
	}
	fclose(zrodlo);
	fclose(cel);
}

int main()
{
	
	char czrodlo[20];
	char ccel[20];
	char *wzrodlo, *wcel;
	printf("Podaj sciezke dostepu do pliku zrodlowego: ");
	scanf("%s",czrodlo);
	printf("Podaj sciezke dostepu do pliku docelowego: ");
	scanf("%s",ccel);
	wzrodlo=czrodlo;
	wcel=ccel;
	
	kopiuj(wzrodlo,wcel);
	return 0;
}
