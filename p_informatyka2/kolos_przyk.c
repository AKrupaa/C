#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//zadeklarowaæ zmienna oraz wskaznik do liczby float
	float a=5.1;
	float *wa=&a;
	printf("%f",*wa);
	
	//z-æ tablice liczb calkowitych
	int tab[4]={1,2,3,4};
	
	//wsk do tablicy 7 elementow typu char
	char tabl[7];
	char *wtabl;
	wtabl=tabl;
	
	//---------------------------------
	
	//Strukturka
	
	//---------------------------------
	system("cls");
	//wsk do tablicy 3 obiektow stuktury o nazwie student
	
	struct student
	{
		char nazwa[20];
		int rok;
		long id;
	}
	tablica[3], kotek={"KOTEK", 9, 1};
	

	printf("%s\n",kotek.nazwa);	//pokaze KOTEK;
	printf("%i\n\n",kotek.rok);	//pokaze 9;
	
	tablica[0].rok=1997;
	printf("%i\n", tablica[0].rok); //1997
	printf("%i\n\n", tablica[1].id); //powinno pokazac 0 tzn. tam niczego nie ma, bo co ma byc jak nic nie napisalismy?
									// moga rowniez wyskoczyc losowe liczby ?
	
	struct student *wsktablicy[3];
	wsktablicy[0]=&kotek;				//wskaznik musisz na poczatku przyrównaæ do ADRESU jakies struktury (w tym przypadku jest to: kotek);
	printf("%s\n",wsktablicy[0]->nazwa);//pokaze: KOTEK
	
	wsktablicy[1]=&tablica[0];
	printf("%i\n",wsktablicy[1]->rok);	//pokaze: 1997
	printf("%i\n",wsktablicy[0]->rok);	//pokaze: 9
	
	//2 zadanie
	printf("\n\n");
	
	int p[2]={10,2};
//	printf("%i",*p++); //NIE DZIA£A
//	printf("%i", *(p++));	//NIE DZIA£A	
	printf("%i\n",(*p)++);	//wypisz wartosc 0 elementu tablicy p, potem p=p+1		//DZIA£A!
							//czyli: wypisz 10, potem p=10+1;
	printf("%i\n",(*p));	//pokaze: p=11;
	printf("%i",(*p));		//pokaze: p=11;
	
	//3
	printf("\n\n\n");
	
	/* Zdefiniowaæ strukturê 'Dane' posiadaj¹c¹ dwa pola sk³adowe: znak oraz tablicê 10-cio znakow¹.
	Zadeklarowaæ i jednoczeœnie zainicjowaæ zmienn¹ typu strukturalnego 'Dane' dowolnymi wartoœciami.
	Zadeklarowaæ wskaŸnik typu strukturalnego 'Dane'. Za jego pomoc¹ utworzyæ dynamicznie obiekt struktury,
	a w kolejnym kroku skopiowaæ do utworzonego obiektu, wartoœci pól sk³adowych utworzonej na pocz¹tku
	zmiennej strukturalnej. Zwolniæ pamiêæ */
	
	
	struct Dane
	{
		char znak;
		char tablica[10];
	} Dane={'A',"ArkadiuszK"};
	
	struct Dane *wskDane;
	wskDane=(struct Dane *) malloc(sizeof(struct Dane));
	wskDane->znak=Dane.znak;
	strcpy(wskDane->tablica,Dane.tablica);	
	printf("%c", wskDane->tablica[4]);	//dzia³a.
	
	free(wskDane); // :-)	:-)	:-)
	
	//4
	printf("\n\n\n");
	/* Deklaracja wskaznika do funkcji bez parametrow i zwracajacej wartosc typu 'float' to: */
	
	float (*czwarte)();
	
	//5
	/*Deklaracja tablicy 3 wskaznikow do funkcji bez parametrow i zwracajacej wartosc typu 'float' to: */
	
	float (*piate[3])();
	
	return 0;
}
