#include <stdio.h>
#include <stdlib.h>

struct student
{
	char imie[20];
	char nazwisko[20];
	int indeks;
	char studia[50];
	char wydzial[10];
	int rok;
} stud;



void wydrukuj(struct student *wsk)
{
	printf("%s\n%s\n%i\n%s\n%s\n%i", wsk->imie, wsk->nazwisko, wsk->indeks, wsk->studia, wsk->wydzial, wsk->rok);
}

int rozmiar(struct student *wsk)
{
	int rozmiar= sizeof(wsk);
	return rozmiar;
}

int main()
{
	struct student *wsk1;
	wsk1=&stud;
	strcpy(wsk1->nazwisko, "Krupinski");
	strcpy(wsk1->imie, "Arkadiusz");
	wsk1->indeks=215523;
	strcpy(wsk1->studia, "Elektronika i Telekomunikacja");
	strcpy(wsk1->wydzial, "WEEIA");
	wsk1->rok=1997;
	wydrukuj(wsk1);
	printf("\nRozmiar= %i", rozmiar(wsk1));
	return 0;
}
