/*
Napisz program, który pobierze od u¿ytkownika liczby (nie wiêcej ni¿ 1000), 
a nastêpnie zastosuje na nim filtr uœredniaj¹cy 
(ka¿dy element ci¹gu wyjœciowego ma byæ œredni¹ dwóch s¹siaduj¹cych elementów ci¹gu wejœciowego). 
Program ma wyœwietliæ wszystkie elementy ci¹gu wyjœciowego oddzielone spacjami. 
Pojawienie siê wartoœci 0 na wejœciu bêdzie oznacza³o zakoñczenie ci¹gu
*/

#include <stdio.h>

int main()
{
	int i=0;
	const int max=1000;
	int tab[1000];
	int liczba;
	printf("Wprowadz liczby oddzielajac ja spacja: \n");
	scanf("%i",&liczba);
	if(liczba==0)
	{
		printf("Wprowadziles 0 (zero). Nastepuje wyjscie z programu!"); return 0;
	}
	else tab[i++]=liczba;

	while(i<max&&liczba!=0)
	{
		scanf("%i", &liczba);
		if(liczba!=0)
		tab[i++]=liczba;
	}

	for(int b=0;b<i;b++)
	{
		if(b==0)
		{
			printf("%f ", (tab[b]+tab[b+1])/(float)2);
		}	
		if(b==i-1)
		{
			printf("%f", ((tab[b-1]+tab[b])/(float)2));
		}
		if(b>1&&b<i-1)
		{
			printf("%f ", ((tab[b-1]+tab[b]+tab[b+1])/(float)3));
		}
	}
	getchar();
	return 0;
}
