/*
Napisz program, który pobierze od u¿ytkownika liczby (nie wiêcej ni¿ 1000), 
a nastêpnie wypisze tylko te elementy ci¹gu, które pojawi³y siê w ci¹gu wiêcej ni¿ raz. 
Pojawienie siê wartoœci 0 na wejœciu bêdzie oznacza³o zakoñczenie ci¹gu.
*/

#include <stdio.h>

int main()
{
	int i=0;
	const int max= 1000;
	int tab[1000];
	int liczba;
	printf("Wprowadz (max %i) liczb po spacji: \n",max);
	scanf("%i",&liczba);
	if(liczba!=0)
	{
		tab[i++]=liczba;
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
			tab[i++]=liczba;	
		}	
	}
	
	int suma;
	for(int q=0;q<i;q++)
	{
		suma=0;
		for(int w=0;w<i;w++)
		{
			if(tab[q]==tab[w])
			suma+=1;
		}
		if(suma>1)
		{
			printf("%i ",tab[q]);
		}
	}
	getchar();
	return 0;
}
