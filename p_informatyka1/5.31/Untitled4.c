/*
Napisz program, kt�ry pobierze od u�ytkownika dwa ci�gi liczb (nie wi�cej ni� 100 element�w w ka�dym). 
Pojawienie si� warto�ci 0 na wej�ciu b�dzie oznacza�o zako�czenie ci�gu. 
Program ma obliczy� i wy�wietli� po spacjach ci�g b�d�cy r�nic� dw�ch wprowadzonych ci�g�w. 
Je�eli ci�gi wej�ciowe b�d� mia�y r�n� d�ugo��, 
to d�ugo�� ci�gu wyj�ciowego ma by� taka jak kr�tszego z wprowadzonych ci�g�w.
*/
#include <stdio.h>
int main()
{
	int i=0;
	int o=0;
	const int max=100;
	int tab1[100];
	int tab2[100];
	int liczba;
	printf("Wprowadz pierwszy ciag liczbowy (max %i) liczb po spacji: \n", max);
	scanf("%i",&liczba);
	if(liczba!=0)
	{
		tab1[i++]=liczba;
	}
	else
	{
		printf("Wprowadzono 0 na poczatku. Nastepuje wyjscie z programu!"); return 0;
	}
	
	while(liczba!=0&&i<max)
	{
		scanf("%i", &liczba);
		if(liczba!=0)
		{
			tab1[i++]=liczba;	
		}	
	}
	
	// --------------------------------------------------------------------------
	
	printf("Wprowadz durgi ciag liczbowy (max %i) liczb po spacji: \n", max);
	scanf("%i",&liczba);
	if(liczba!=0)
	{
		tab2[o++]=liczba;
	}
	else
	{
		printf("Wprowadzono 0 na poczatku. Nastepuje wyjscie z programu!"); return 0;
	}
	
	while(liczba!=0&&o<max)
	{
		scanf("%i", &liczba);
		if(liczba!=0)
		{
			tab2[o++]=liczba;	
		}	
	}
	
	int r;
	if(i>o) r=o;
	else r=i;
	printf("Roznica odpowiednich wyrazow ciagu pierwszego i wyrazow ciagu drugiego: \n");
	for(int q=0;q<r;q++)
	{
		printf("%i ",tab1[q]-tab2[q]);
	}
	
	getchar();
	return 0;
}
