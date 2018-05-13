#include <stdio.h>


int main()
{
	FILE *zrodlo;
	FILE *cel;
	
	if((zrodlo=fopen("zadanie5zrodlo.txt","w"))==NULL)	//zrodlo > stworz + napisz tekst > zamknij
	{
		printf("Blad pliku ZRODLO (W)");
		return -1;
	}
	
	fprintf(zrodlo,"%s","ciekawe\njak\nduzo\nczasu\nmi\nzostalo");	
	
	fclose(zrodlo);
	
	if((cel=fopen("zadanie5cel.txt","w"))==NULL)			//OTWORZ, ZAPISZ do cel
	{
		printf("Blad pliku CEL (W)");
		return -1;
	}
	
	if((zrodlo=fopen("zadanie5zrodlo.txt","r"))==NULL)	//odczyt ZRODLO
	{
		printf("Blad pliku ZRODLO (r)");
		return -1;
	}
	

	char ch;
	int i;
	int rozmiarZ;
	fseek(zrodlo,0,SEEK_END);
	rozmiarZ=ftell(zrodlo);
	rozmiarZ--; // rzeczywista wartosc zrodla ( - '\0' )
	printf("rozmiar = %i\n", rozmiarZ);
	fseek(zrodlo,0,SEEK_SET);
	
	for(;rozmiarZ>=0;rozmiarZ--)
	{
		ch=fgetc(zrodlo);
		if(feof(zrodlo)) break;
//		printf("%c",ch);
		fprintf(cel,"%c", ch);
	}


	
	fclose(zrodlo);
	fclose(cel);
	
	
	return 0;	
}
