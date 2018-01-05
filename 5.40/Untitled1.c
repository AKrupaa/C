/*
Napisz program, kt�ry pobierze od u�ytkownika dwa ci�gi liczb (nie wi�cej ni� 100 element�w w ka�dym). 
Pojawienie si� warto�ci 0 na wej�ciu b�dzie oznacza�o zako�czenie ci�gu. 
Dla ka�dych dw�ch kolejnych element�w pierwszego ci�gu program ma wy�wietli� (po spacjach) 
ile element�w w drugim ci�gu ma warto�� znajduj�c� si� w przedziale pomi�dzy nimi.
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
