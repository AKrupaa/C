/*
Zmodyfikuj program z zadania 5.36 w taki sposób, 
aby indeksem wypisywanej wartoœci by³ ca³kowita œrednia wszystkich indeksów komórek, 
w których pojawi³a siê wartoœæ minimalna i maksymalna.
*/

#include <stdio.h>

int main()
{
	const int max=1000;
	int tab[1000];
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
	
	//znajdz wartosc minimalna i wszystkie indeksy
	int min=tab[0];
	int tab_i_min[i];
	int o=0;
	for(int q=1;q<i;q++)
	{
		if(min>tab[q])
		{
			min=tab[q];
			//printf("indeks min %i \n", indeks_min);
		}
	}
	//wszystkie indeksy dla wartosci minimalnej
//	printf("minimalna wartosc: %i \n", min);
	
	for(int e=0;e<i;e++)
	{
		if(min==tab[e])
		tab_i_min[o++]=e;
//		printf("INDEKS MIN: tab_i_min[%i]= %i\n", o-1,tab_i_min[o-1]);
	}
	//tab_i_min[o] zawiera indeksy gdzie wystapila wartosc minimalna
	
	
	
	//znajdz wartosc maksymalna i wszystkie indeksy
	int maks=tab[0];
	int tab_i_maks[i];
	int p=0;
	for(int w=1;w<i;w++)
	{
		if(maks<tab[w])
		{
			maks=tab[w];
		//	printf("indeks max %i \n", indeks_maks);
		}
	}
//	printf("maksymalna wartosc: %i \n", maks);
	//wszystkie indeksy dla wartosci maksymalnej
	for(int r=0;r<i;r++)
	{
		if(maks==tab[r])
		tab_i_maks[p++]=r;
//		printf("INDEKS MAKS: tab_i_maks[%i]= %i\n", p-1,tab_i_maks[p-1]);
	}
	//tab_i_maks[p] zawiera indeksy gdzie wystapila wartosc maksymalna
	
	//aby indeksem wypisywanej wartoœci by³ ca³kowita œrednia wszystkich indeksów komórek, 
	//w których pojawi³a siê wartoœæ minimalna i maksymalna.
	
	int suma_indeksow=0;
	int licznik_wyrazow=0;
	for(int t=0;t<o;t++)
	{
		suma_indeksow+=tab_i_min[t];
	//	printf("Suma indeksow = %i \n", suma_indeksow);
		licznik_wyrazow+=1;
	}

	for(int y=0;y<p;y++)
	{
		suma_indeksow+=tab_i_maks[y];
		//printf("Suma indeksow = %i \n", suma_indeksow);
		licznik_wyrazow+=1;
	}
	//	printf("Suma indeksow (miejsc): %i \n", suma_indeksow);
	//	printf("Licznik wyrazow indeksow: %i \n", licznik_wyrazow);
		
	
	int srednia_indeksow=suma_indeksow/licznik_wyrazow;
	printf("%i",tab[srednia_indeksow]); //ulamki? zostawia tylko calosci
	getchar();
	return 0;
}
