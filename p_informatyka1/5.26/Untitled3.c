/* 
Napisz program, który pobierze od u¿ytkownika liczby (nie wiêcej ni¿ 1000), 
pojawienie siê wartoœci 0 na wejœciu bêdzie oznacza³o zakoñczenie ci¹gu. 
Po zakoñczeniu wprowadzania ci¹gu zostanie podana dodatkowa liczba. Program ma wyœwietliæ w osobnych liniach dwie wartoœci:
- liczbê elementów ci¹gu, które s¹ mniejsze od podanej na koñcu wartoœci, 
- liczbê elementów ci¹gu, które s¹ wiêksze od podanej na koñcu wartoœci.
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
	
	printf("Wprowadz dodatkowa liczbe: ");
	scanf("%i",&liczba);

	//for(int q=0;q<i;q++) printf("%i ", tab[q]);
	//printf("Dodatkowa liczba wynosi %i", liczba);
	//printf("\n\n\n"); 
	int suma=0;
	int suma1=0;
	for(int a=0;a<i;a++)
	{
		if(tab[a]<liczba)
		{
			suma+=1;
		}
		if(tab[a]>liczba)
		{
			suma1+=1;
		}
	}
	printf("Liczba elemntow liczb mniejszych niz %i wynosi: %i\n",liczba,suma);
	printf("Liczba elemntow liczb wiekszych niz %i wynosi: %i",liczba,suma1);
	getchar();
	return 0;
}
