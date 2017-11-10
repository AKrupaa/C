/*
Napisz program, który pobierze od u¿ytkownika dwa ci¹gi liczb (nie wiêcej ni¿ 100 elementów w ka¿dym). 
Pojawienie siê wartoœci 0 na wejœciu bêdzie oznacza³o zakoñczenie ci¹gu. 
Dla ka¿dego elementu pierwszego ci¹gu program ma wyœwietliæ (po spacjach) 
ile elementów w drugim ci¹gu ma wartoœæ wiêksz¹ od niego.
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
