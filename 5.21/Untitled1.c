/*Napisz program, który pobierze od u¿ytkownika liczby (nie wiêcej ni¿ 1000), 
a nastêpnie wypisze w osobnych liniach œredni¹, sumê elementów wiêkszych od œredniej oraz sumê elementów mniejszych od œredniej. 
Pojawienie siê wartoœci 0 na wejœciu bêdzie oznacza³o zakoñczenie ci¹gu. */

#include <stdio.h>

int main()
{
	const int max=1000;
	int tab[max];
	int i=0;
	int liczba;
	int suma=0;
	float srednia;
	printf("Program konczy wczytywanie danych gdy napotka 0 (zero)\n");
	printf("Program wyznacza w osobnych liniach:\n");
	printf("srednia, sume elemtow wiekszych od sredniej oraz sume elementow mniejszych od sredniej\n");
    printf("Podaj liczby oddzielone spacjami (max %d): ", max);
	
	scanf("%i",&liczba);
	if(liczba!=0)
		tab[i++]=liczba;
	else
	{
		printf("Wpisales 0 na poczatku, nastepuje wyjscie z programu.\n"); return 0;
	}
	while(liczba!=0&&i<max)
	{
		scanf("%d",&liczba);
		if(liczba!=0)
		tab[i++]=liczba;
	}
	
	//policzyc srednia (sr=suma/i), dodawc wszystkie liczby mniejsze od sredniej, dodac wszystkie liczby wieksze od sredniej
/*	int temp; //sortowanie dla cwiczenia
	for(int j=0;j<i;j++)
	{
		for(int k=0;k<i-1;k++)
		{
			if(tab[k]>tab[k+1])
			{
				temp=tab[k];
				tab[k]=tab[k+1];
				tab[k+1]=temp;
			}
		}
	}*/
//	for(int s=0;s<i;s++) printf("%i\n",tab[s]); //czy poprawnie posortowalo?
	
	//srednia:
	for(int z=0;z<i;z++)
	{
		suma+=tab[z];
	}
	printf("Srednia (z %i liczb)= %f\n", i, srednia=(float)suma/i);
	
	//suma elementow < srednia
	suma=0;
	for(int x=0;x<i;x++)
	{
		if(tab[x]<srednia)
			suma+=tab[x];
	}
	printf("Suma elemntow mniejszych niz srednia= %i\n", suma);
	
	//suma elemntow > srednia
	suma=0;
	for(int c=0;c<i;c++)
	{
		if(tab[c]>srednia)
		suma+=tab[c];
	}
	printf("Suma elemntow wiekszych niz srednia= %i", suma);
	
	getchar();
	return 0;
}
