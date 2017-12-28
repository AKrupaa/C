/*
Napisz program, kt�ry pobierze od u�ytkownika dwa ci�gi liczb (nie wi�cej ni� 100 element�w w ka�dym). 
Pojawienie si� warto�ci -1 na wej�ciu b�dzie oznacza�o zako�czenie ci�gu. 
Program ma wygenerowa� ci�g wyj�ciowy, kt�rego elementy b�d� warto�ciami pobranymi z kom�rek pierwszego ci�gu, 
wskazywanymi przez kolejne warto�ci drugiego ci�gu. 
Je�eli warto�� z kom�rki drugiego ci�gu jest wi�ksza od d�ugo�ci pierwszego ci�gu lub mniejsza od zera, 
to w to miejsce ma zosta� pobrana odpowiednio warto�� ostatniego lub pierwszego elementu.
*/


int clamp(int v, int lo, int hi) //hi==i-licznik; lo==0 //v to indeks tabeli
{
	if(v>=lo&&v<hi)
	{
		return v;
	}
	
	if(v<lo)
	{
		return lo;
	}
	
	if(v>=hi)
	{
		return hi-1;
	}
}

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
	
	for(int q=0;q<i;q++)
	{
		printf("%i ", tab2[clamp(tab1[q],0,o)]);
	}


	return 0;	
}
