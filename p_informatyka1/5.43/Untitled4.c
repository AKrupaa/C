/*
Napisz program, który pobierze od u¿ytkownika ci¹g liczb (nie wiêcej ni¿ 100 elementów) 
i sprawdzi czy ci¹g ten jest palindromem. 
Program ma wypisaæ “TAK”, je¿eli podany ci¹g jest palindromem lub “NIE” w przeciwnym przypadku. 
S³owo jest palindromem wtedy, gdy czytane od pocz¹tku do koñca i od koñca do pocz¹tku bêdzie takie samo.
*/

#include <stdio.h>

int main()
{
	const int max=100;
	int tab1[100];
	int liczba;
	int i=0;
	printf("Wprowadzenie wartosci 0 (zero) oznacza zakonczenie ciagu!\n");
	printf("Wprowadz (max %i) elementow ciagu pierwszego: \n",max);
	scanf("%i",&liczba);
	if(liczba!=0)
	{
		tab1[i++]=liczba;
	}
	else
	{
		printf("Wprowadzono 0 (zero) na poczatku! Nastepuje wyjscie z programu."); return 0;
	}
	while(liczba!=0&&i<max)
	{
		scanf("%i",&liczba);
		if(liczba!=0)
		tab1[i++]=liczba;
	}
	
	int p; //poczatek
	int k; //koniec
	int flaga=1; // TAK, podany ci¹g jest palindromem
	for(p=0, k=i-p-1; p<k&&flaga==1; p++, k--)
	{
		if(tab1[p]==tab1[k])
		{
			flaga=1;
		//	printf("tab1[%i] = tab1[%i] czyli %i =?= %i\n", p,k,tab1[p],tab1[k]);
		}
		else
		{
		//	printf("tab1[%i] = tab1[%i] czyli %i =?= %i\n", p,k,tab1[p],tab1[k]);
			flaga=0;
		}
		
	}
	if(flaga==0)
		printf("NIE");
	else
		printf("TAK");
	return 0;	
}
