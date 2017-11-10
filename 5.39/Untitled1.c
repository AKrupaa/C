/*
Napisz program, kt�ry pobierze od u�ytkownika dwa ci�gi liczb (nie wi�cej ni� 100 element�w w ka�dym). 
Pojawienie si� warto�ci 0 na wej�ciu b�dzie oznacza�o zako�czenie ci�gu. 
Dla ka�dego elementu pierwszego ci�gu program ma wy�wietli� (po spacjach) 
ile element�w w drugim ci�gu ma warto�� wi�ksz� od niego.
*/

#include <stdio.h>

int main()
{
	const int max=100;
	int tab1[max];
	int tab2[max];
	int liczba;
	int i=0;
	int o=0;
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
	
	//---------------------------------------------------------------------------------------------------
	
	printf("Wprowadz (max %i) elementow ciagu drugiego: \n",max);
	scanf("%i",&liczba);
	if(liczba!=0)
	{
		tab2[o++]=liczba;
	}
	else
	{
		printf("Wprowadzono 0 (zero) na poczatku! Nastepuje wyjscie z programu."); return 0;
	}
	while(liczba!=0&&i<max)
	{
		scanf("%i",&liczba);
		if(liczba!=0)
		tab2[o++]=liczba;
	}
	
	int suma;
	
	for(int q=0;q<i;q++)
	{
		suma=0;
		for(int w=0;w<o;w++)
		{
			if(tab1[q]<tab2[w])
			suma+=1;
		}
		printf("%i ",suma);
	}
	
	getchar();
	return 0;
}
