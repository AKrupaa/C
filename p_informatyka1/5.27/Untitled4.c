/*
Napisz program, kt�ry pobierze od u�ytkownika liczby (nie wi�cej ni� 1000), 
a nast�pnie wypisze wszystkie elementy ci�gu bez duplikuj�cych si� warto�ci. 
Pojawienie si� warto�ci 0 na wej�ciu b�dzie oznacza�o zako�czenie ci�gu. Program nie mo�e zmienia� kolejno�ci warto�ci.
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
	
	int tabK[i];
	//kopia oryginalnej tablicy
	for(int a=0;a<i;a++)
	{
		tabK[a]=tab[a];
	}
	
		for(int q=0;q<i;q++)
		{
		for(int w=q+1;w<i;w++)
		{
			if(tab[q]==tabK[w])
			{
				tabK[w]=NULL;
			}
			
		}
	}

	
	for(int e=0;e<i;e++)
	{
		if(tabK[e]!=NULL)
		printf("%i ", tabK[e]);
	}
	
	getchar();
	return 0;
}
