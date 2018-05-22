#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

struct dane
{
	int numer;
	char nazwisko[20];
	int klasa;
};

void wprowadz_dane(struct dane *nazwa)
{
	printf("Wprowadz dane:\nNumer, Nazwisko, Klasa\n");
	scanf("%i", &nazwa->numer);	//bo numer w stukturze nie jest wskaznikiem dlatego potrzebujemy & (adresu) tej zmiennej!
	scanf("%s", &nazwa->nazwisko);
	scanf("%i", &nazwa->klasa);
}

void drukuj_dane(struct dane *nazwa)
{
	printf("Drukowanie danych:\n");
	printf("Numer: %i\nNazwisko: %s\nKlasa: %i\n", nazwa->numer, nazwa->nazwisko, nazwa->klasa);
}
int zapisz_do_pliku(struct dane *nazwa)
{
	FILE* stream;
	if((stream=fopen("plik.txt", "w"))==NULL)
	{
		printf("Blad zapisu do pliku!");
		return -1;
	}
	
	fprintf(stream,"Numer: %i\nNazwisko: %s\nKlasa: %i\n", nazwa->numer, nazwa->nazwisko, nazwa->klasa);
	
	fclose(stream);
}
int wczytaj_z_pliku(struct dane *nazwa)
{
	FILE* stream;
	if((stream=fopen("plik.txt", "r"))==NULL)
	{
		printf("Blad odczytu z pliku!");
		return -2;
	}
	
	while(!feof(stream))
		printf("%c", fgetc(stream));
	
	fclose(stream);
}

int main()
{
	struct dane czlowiek, *wsk;
	wsk=&czlowiek;
	
	czlowiek.klasa=4;
	printf("Klasa: %i\n", czlowiek.klasa);
	strcpy(wsk->nazwisko,"Krupinski");
	printf("Nazwisko: %s\n", wsk->nazwisko);
	
	system("cls");	//czysc ekran
	
	
	wprowadz_dane(wsk);
	drukuj_dane(wsk);
	printf("zapis do pliku -> odczyt z pliku ");
	zapisz_do_pliku(wsk);	
	
	getch();		//poczekaj na klikniecie dowolnego przycisku
	system("cls");	//czysc ekran
	
	wczytaj_z_pliku(wsk);
	
	return 0;
}
