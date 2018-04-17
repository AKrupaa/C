#include <stdio.h>

int main()
{
	/*
	1)
		imie 
		nazwiska
		waga
		wzrost
		
	zapisac to do pliku.
	*/
	FILE* stream;
	stream = fopen("tekst.txt", "w");
	if ( ( stream = fopen( "tekst.txt", "w" ) ) == NULL )
	{
		printf("Nie ma dostêpu do pliku.");
		return 0;
	}
	
	char imie[20];
	char nazwisko[20];
	unsigned int waga;
	unsigned int wzrost;
	
	printf("Podaj imie, nazwisko, wage oraz wzrost:\n");
	scanf( "%s%s%i%i", imie, nazwisko, &waga, &wzrost);
	
	fprintf( stream, "%s\n%s\n%i\n%i", imie, nazwisko, waga, wzrost);
	
	fclose( stream ); 
	
	return 0;
}
