/*
Napisz program, który pobierze od u¿ytkownika dwa ci¹gi liczb (nie wiêcej ni¿ 100 elementów w ka¿dym). 
Pojawienie siê wartoœci 0 na wejœciu bêdzie oznacza³o zakoñczenie ci¹gu. 
Dla ka¿dych dwóch kolejnych elementów pierwszego ci¹gu program ma wyœwietliæ (po spacjach) 
ile elementów w drugim ci¹gu ma wartoœæ znajduj¹c¹ siê w przedziale pomiêdzy nimi.
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
	int zasiegmin;
	int zasiegmax;
	int temp;
	int suma;
	for(int q=0;q<i-1;q++)
	{
		zasiegmin=tab1[q];
		zasiegmax=tab1[q+1];
		if(zasiegmin>zasiegmax)
		{
			temp=zasiegmax;
			zasiegmax=zasiegmin;
			zasiegmin=temp;
		}
		suma=0;
		for(int w=0;w<o;w++)
		{
			if(tab2[w]>zasiegmin&&tab2[w]<zasiegmax)
			{
				suma+=1;
			}
			
		}
		printf("%i ", suma);
	}
	
	return 0;
}
