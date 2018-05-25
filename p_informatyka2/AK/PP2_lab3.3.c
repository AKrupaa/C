/*
Napisa� program do kopiowania plik�w tekstowych. 
Program powinien oczekiwa� na podanie �cie�ki dost�pu do pliku �r�d�owego i pliku docelowego. 
*/

#include <stdio.h>

int main()
{
	FILE *zrodlo;
	FILE *cel;
	char czrodlo[20];
	char ccel[20];
	printf("Podaj sciezke dostepu do pliku zrodlowego: ");
	scanf("%s",czrodlo);
	
	printf("Podaj sciezke dostepu do pliku zrodlowego: ");
	scanf("%s",ccel);
	
	if((zrodlo=fopen(czrodlo,"r"))==NULL)	return -1;
	if((cel=fopen(ccel,"w"))==NULL)	return -2;
	
	char ch;
	for(;;)
	{
		ch=fgetc(zrodlo);
		if(ch==EOF) break;
		fprintf(cel,"%c",ch);
	}
	
	fclose(zrodlo);
	fclose(cel);
	
	return 0;
}
