/*
Napisz program, który pobierze od u¿ytkownika dwa ci¹gi liczb 
(pierwszy ma nie wiêcej ni¿ 1000 elementów, drugi dok³adnie dwa elementy). 
Pojawienie siê wartoœci 0 na wejœciu bêdzie oznacza³o zakoñczenie ci¹gu. 
Program ma wyœwietliæ ile razy w pierwszym ci¹gu wyst¹pi³ drugi ci¹g. 
A nastêpnie w kolejnych liniach indeksy z pierwszego ci¹gu, w których pojawi³ siê drugi.
*/

#include <stdio.h>

int main()
{
	int i=0;
	const int max=1000;
	int tab1[max];
	int tab2[2];
	int liczba;
	printf("Wprowadzenie zera oznacza zakonczenie ciagu.\n");
	printf("Wprowadz (max %i) elementow po spacji: \n", max);
	scanf("%i", &liczba);
	if(liczba!=0) 
	tab1[i++]=liczba;
	else
	{
		printf("Wprowadzono 0 (zero) na poczatku! Nastepuje wyjscie z programu. \n"); return 0;
	}
	while(liczba!=0&&i<max)
	{
		scanf("%i", &liczba);
		if(liczba!=0) 
		tab1[i++]=liczba;
	}
	
	// ---------------------------------------------------------------------
	
	printf("Wprowadz dokladnie dwa elementy inne niz 0 (zero) po spacji: \n");
	for(int q=0;q<2;q++)
	{
		scanf("%i", &liczba);
		if(liczba!=0) 
		tab2[q]=liczba;
		else
		{
			printf("Wprowadzono 0 (zero). Nastepuje wyjscie z programu. \n"); return 0;
		}
	}

	/*
	Program ma wyœwietliæ ile razy w pierwszym ci¹gu wyst¹pi³ drugi ci¹g. 
	A nastêpnie w kolejnych liniach indeksy z pierwszego ci¹gu, w których pojawi³ siê drugi.
	*/
	int suma=0;
	int indeks[500];
	int o=0;
	for(int a=0;a<1;a++)
	{
		for(int b=0;b<i-1;b++)
		{
			if(tab2[a]==tab1[b])
			{
				if(tab2[a+1]==tab1[b+1])
				{
					suma+=1;
					indeks[o++]=b;
				}
			}
		}
	}
	printf("Znaleziono %i\n", suma);
	for(int c=0; c<o; c++)
	{
		printf("%i \n", indeks[c]);
	}
	
	getchar();
	return 0;
}
