/*
Napisz program, który pobierze od u¿ytkownika liczby (nie wiêcej ni¿ 1000), 
a nastêpnie na jego podstawie wygeneruje ci¹g wyjœciowy wed³ug nastêpuj¹cego schematu: 
(zak³adaj¹c ¿e ci¹g wejœciowy ma n elementów) 
pierwszy element ci¹gu wyjœciowego to ró¿nica ostatniego i pierwszego elementu ci¹gu wejœciowego, 
drugi to ró¿nica elementów n - 1 i 1, itd. W przypadku nieparzystej liczby elementów element œrodkowy powinien zostaæ przepisany. 
Program ma wyœwietliæ wszystkie elementy ci¹gu wyjœciowego oddzielone spacjami. 
Pojawienie siê wartoœci 0 na wejœciu bêdzie oznacza³o zakoñczenie ci¹gu.
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
	
	for(int a=0;a<(i+1)/2;a++)
	{
		if(i%2==0)
		{
			printf("%i ", tab[i-1-a]-tab[a]);
		}	
		if(i%2==1&&a!=(((i+1)/2)-1))
		{
			printf("%i ", tab[i-1-a]-tab[a]);
		}
			if(a%2==1&&a==((i+1)/2)-1)
			{
				printf("%i ", tab[((i+1)/2)-1]);
			}
	}
	
	getchar();
	return 0;
}
