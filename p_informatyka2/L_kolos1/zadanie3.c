#include <stdio.h>


int main()
{
	FILE *stream;
	if((stream=fopen("zadanie3.txt","w"))==NULL)
	{
		printf("Blad pliku (W)");
		return -1;
	}

	fprintf(stream,"%s","ciekawe jak duzo czasu mi zostalo :D");
	
	fclose(stream);
	
	if((stream=fopen("zadanie3.txt","r"))==NULL)
	{
		printf("Blad pliku (R)");
		return -2;
	}
	
	char ch;
	while(!feof(stream))
	{
		ch=fgetc(stream);
		printf("%c",ch);
	}
	
	fclose(stream);
	return 0;	
}

