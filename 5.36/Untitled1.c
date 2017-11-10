/*
Napisz program, który pobierze od u¿ytkownika liczby (nie wiêcej ni¿ 1000), 
a nastêpnie wypisze wartoœæ elementu ci¹gu znajduj¹cego siê pod indeksem, 
bêd¹cym ca³kowit¹ œredni¹ indeksów z minimaln¹ i maksymaln¹ wartoœci¹ ci¹gu. 
Je¿eli jedna z tych wartoœci pojawi³a siê w ci¹gu wiêcej ni¿ raz do wyznaczania œredniej ma byæ wykorzystany ni¿szy indeks. 
Pojawienie siê wartoœci 0 na wejœciu bêdzie oznacza³o zakoñczenie ci¹gu. 
*/

#include <stdio.h>

int main()
{
	const int max=1000;
	int tab[max];
	int liczba;
	int i=0;
	printf("Wprowadzenie wartosci 0 (zero) oznacza zakonczenie ciagu!\n");
	printf("Wprowadz (max %i) elementow ciagu: \n",max);
	scanf("%i",&liczba);
	if(liczba!=0)
	{
		tab[i++]=liczba;
	}
	else
	{
		printf("Wprowadzono 0 (zero) na poczatku! Nastepuje wyjscie z programu."); return 0;
	}
	while(liczba!=0&&i<max)
	{
		scanf("%i",&liczba);
		if(liczba!=0)
		tab[i++]=liczba;
	}
	
	//znajdz wartosc minimalna i pierwszy indeks
	int min=tab[0];
	int indeks_min=0;
	for(int q=1;q<i;q++)
	{
		if(min>tab[q])
		{
			min=tab[q];
			indeks_min=q;
			//printf("indeks min %i \n", indeks_min);
		}
	}
	//znajdz wartosc maksymalna i pierwszy indeks
	int maks=tab[0];
	int indeks_maks=0;
	for(int w=1;w<i;w++)
	{
		if(maks<tab[w])
		{
			maks=tab[w];
			indeks_maks=w;
		//	printf("indeks max %i \n", indeks_maks);
		}
	}
	
	int srednia_indeksow=(indeks_min+indeks_maks)/2;
	
	printf("%i",tab[srednia_indeksow]); //ciekawe co z ulamkami...
	getchar();
	return 0;
}
