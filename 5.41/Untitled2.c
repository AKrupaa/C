/*
Napisz program, który pobierze od u¿ytkownika dwa ci¹gi liczb (nie wiêcej ni¿ 100 elementów w ka¿dym). 
Pojawienie siê wartoœci -1 na wejœciu bêdzie oznacza³o zakoñczenie ci¹gu. 
Program ma wygenerowaæ ci¹g wyjœciowy, którego elementy bêd¹ wartoœciami pobranymi z komórek pierwszego ci¹gu, 
wskazywanymi przez kolejne wartoœci drugiego ci¹gu. 
Je¿eli wartoœæ z komórki drugiego ci¹gu jest wiêksza od d³ugoœci pierwszego ci¹gu lub mniejsza od zera, 
to w to miejsce ma zostaæ pobrana odpowiednio wartoœæ ostatniego lub pierwszego elementu.
*/


#include <stdio.h>

int main()
{
	const int max=100;
	int tab1[100];
	int tab2[100];
	int liczba;
	int i=0;
	int o=0;
	printf("Wprowadzenie wartosci -1 oznacza zakonczenie ciagu!\n");
	printf("Wprowadz (max %i) elementow ciagu pierwszego: \n",max);
	scanf("%i",&liczba);
	if(liczba!=-1)
	{
		tab1[i++]=liczba;
	}
	else
	{
		printf("Wprowadzono -1 na poczatku! Nastepuje wyjscie z programu."); return 0;
	}
	while(liczba!=-1&&i<max)
	{
		scanf("%i",&liczba);
		if(liczba!=-1)
		tab1[i++]=liczba;
	}
	
	//---------------------------------------------------------------------------------------------------
	
	printf("Wprowadz (max %i) elementow ciagu drugiego: \n",max);
	scanf("%i",&liczba);
	if(liczba!=-1)
	{
		tab2[o++]=liczba;
	}
	else
	{
		printf("Wprowadzono -1 na poczatku! Nastepuje wyjscie z programu."); return 0;
	}
	while(liczba!=-1&&i<max)
	{
		scanf("%i",&liczba);
		if(liczba!=-1)
		tab2[o++]=liczba;
	}
	
	int indeks;
	for(int q=0;q<i;q++)
	{
		indeks=tab1[q];
		if(indeks>=0&&indeks<o)
		{
			printf("%i ", tab2[indeks]);
		}
		if(indeks>=o)
		{
			printf("%i ", tab2[o-1]);
		}
		if(indeks<0)
		{
			printf("%i ", tab2[0]);
		}
	}


	return 0;	
}
