#include <stdio.h>

/*
Zawarto�� dowolnego pliku tekstowego wy�wietli� na konsoli. 
�cie�k� dost�pu do pliku nale�y pobra� od u�ytkownika.
*/
int main()
{
	printf("Podaj sciezke do pliku: ");
	char sciezka[100];
	scanf("%s", sciezka);
	
	FILE *stream;
	if ( ( stream = fopen( sciezka, "r" ) ) == NULL )
	{
		printf("Blad R");
		return 0;
	}
	
	while(!feof(stream))
	{
		//char ch = fgetc(stream);
		printf("%c", fgetc(stream));
	}
	
	fclose(stream);
	
	return 0;
}
