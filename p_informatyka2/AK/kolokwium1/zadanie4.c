#include <stdio.h>


int main()
{
	FILE *stream;
	if((stream=fopen("zadanie4.txt","w"))==NULL)
	{
		printf("Blad pliku (W)");
		return -1;
	}

	fprintf(stream,"%s","ciekawe\njak\nduzo\nczasu\nmi\nzostalo :D");	// \n = 5 ;)
	
	fclose(stream);
	
	if((stream=fopen("zadanie4.txt","r"))==NULL)
	{
		printf("Blad pliku (R)");
		return -2;
	}
	
	int ile=0;
	
	while(!feof(stream))
	{
		if(fgetc(stream)=='\n')
		ile++;
	}
	
	printf("Ilosc wierszy = %i", ile);
	
	return 0;	
}
