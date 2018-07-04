#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
Zdefiniowaæ strukturê student. Struktura powinna umo¿liwiæ przechowanie
nastêpuj¹cych informacji:
• imiê;
• nazwisko;
• numer indeksu;
• kierunek studiów;
• wydzia³;
• rok studiów.
Napisaæ funkcje umo¿liwiaj¹ce:
• wype³nienie wszystkich pól struktury (jednoczeœnie);
• wype³nienie poszczególnych pól struktury (pojedynczo);
• wydrukowanie wartoœci wszystkich pól struktury;
• wydrukowanie wartoœci poszczególnych pól struktury.
*/

struct struktura
{
	char imie[20];
	char nazwisko[25];
	int indeks;			//215523
	char studia[10];
	char wydzial[100];
};

void wypelnij_wszystko(struct struktura *wsk)
{
	system("cls");
	printf("Podaj kolejno: imie, nazwisko, indeks, studia, wydzial\n");
	scanf("%s %s %i %s %s", &wsk->imie,&wsk->nazwisko, &wsk->indeks, &wsk->studia,&wsk->wydzial);
	system("cls");
}
void wypelnij(struct struktura *wsk)
{
	system("cls");
	printf(" 1- imie\n 2- nazwisko\n 3- indeks\n 4- studia\n 5- wydzial\n");
	int wybor;
		scanf("%i", &wybor);
		switch(wybor)
		{
			case 1:	scanf("%s", wsk->imie);
			break;
			case 2:	scanf("%s", wsk->nazwisko);
			break;
			case 3:	scanf("%i", &wsk->indeks);
			break;
			case 4:	scanf("%s", wsk->studia);
			break;
			case 5:	scanf("%s", wsk->wydzial);
			break;
		}
		system("cls");
}
void wydruk_wszystkiego(struct struktura *wsk)
{
	system("cls");
	printf("	Imie: %s\n	Nazwisko: %s\n	Indeks: %i\n	Studia: %s\n	Wydzial: %s\n",wsk->imie, wsk->nazwisko, wsk->indeks, wsk->studia, wsk->wydzial);
	getch();
	system("cls");
}
void wydruk(struct struktura *wsk)
{
	system("cls");
	printf("Co chcesz podejrzec:\n 1- imie\n 2- nazwisko\n 3- indeks\n 4- studia\n 5- wydzial\n");
	int wybor;
		scanf("%i", &wybor);
		switch(wybor)
		{
			case 1:	printf("%s", wsk->imie);
			break;
			case 2:	printf("%s", wsk->nazwisko);
			break;
			case 3:	printf("%i", wsk->indeks);
			break;
			case 4:	printf("%s", wsk->studia);
			break;
			case 5:	printf("%s", wsk->wydzial);
			break;
		}
		getch();
		system("cls");
}


int main()
{
	struct struktura student;
	struct struktura *wskstudent;
	wskstudent=&student;
	wskstudent=(struct struktura *) malloc(sizeof(struct struktura));
	
	int wybor;
	do
	{
		printf("\n- Opcje programu -\n");
	    printf("\n1 - Wypelnij wszystkie pola");
	    printf("\n2 - Wypelnij jedno pole");
	    printf("\n3 - Drukuj wszystkie pola");
	    printf("\n4 - Drukuj jedno pole");
	    printf("\n5 - Koniec dzialania programu\n");
	    
	    
	    scanf("%i", &wybor);
	    fflush(stdin);
	    switch(wybor)
	    {
	    	case 1: wypelnij_wszystko(wskstudent);
	    	break;
	    	case 2: wypelnij(wskstudent);
	    	break;
	    	case 3:	wydruk_wszystkiego(wskstudent);
	    	break;
	    	case 4: wydruk(wskstudent);
	    	break;
	    	case 5: printf("Program zakonczyl dzialanie");
	    	break;
	    	default: printf("Zly wybor!"); getch(); system("cls");
		}
	}while(wybor!=5);
	
}
