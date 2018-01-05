/*
Napisz program, który pobierze od u¿ytkownika dwa ci¹gi liczb (nie wiêcej ni¿ 100 elementów w ka¿dym). 
Pojawienie siê wartoœci 0 na wejœciu bêdzie oznacza³o zakoñczenie ci¹gu. 
Program ma obliczyæ i wyœwietliæ po spacjach ci¹g bêd¹cy ró¿nic¹ dwóch wprowadzonych ci¹gów. 
Je¿eli ci¹gi wejœciowe bêd¹ mia³y ró¿n¹ d³ugoœæ, 
to d³ugoœæ ci¹gu wyjœciowego ma byæ taka jak krótszego z wprowadzonych ci¹gów.
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
