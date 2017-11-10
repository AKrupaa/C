#include <stdio.h>

/*
Napisz program, który pobierze od uzytkownika dwa ciagi liczb (nie wiecej niz 100 elementów w kazdym). 
Pojawienie sie wartosci 0 na wejsciu bedzie oznaczalo zakonczenie ciagu. 
Program ma wyswietlic, po spacjach, wszystkie elementy, które wystapily przynajmniej raz w obu ciagach.
*/

int main()
{
	int i=0;
	int o=0;
	const int max=100;
	int tab1[max];
	int tab2[max];
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
	
	// jezeli pojawi w pierwszym ciagu 1 2 3 4 5 
	// i w drugim ciagu				   1 99 9 3 9
	// to ma wypisac 1, 3 bo sie powtarza w obu tablicach.

		int suma;
		int tabNowa[max];
		int p=0;
		for(int q=0;q<i;q++)
		{
			suma=0;
			for(int w=0;w<o;w++)
			{
		//		printf("tab1[%i] = %i  --- tab2[%i] = %i\n",q,tab1[q],w,tab2[w]);
				if(tab1[q]==tab2[w])
				{
					suma+=1;
		//			printf("Suma = %i\n", suma);
				}	
			}
			if(suma>0)
			{
				tabNowa[p++]=tab1[q];
		//		printf("tabNowa[%i] = %i\n", p-1, tabNowa[p-1]);
			}
		}
		
		int tabK[p];
		for(int d=0;d<p;d++)
		{
			tabK[d]=tabNowa[d];
		}
	
		for(int e=0;e<p;e++)
		{
			for(int r=e+1;r<p;r++)
			{
				if(tabNowa[e]==tabK[r])
				{
					tabK[r]=NULL;
				}
			}
		}
	//	printf("\n\n");
		printf("To co sie powtorzylo w obu tablicach: \n");
		
		for(int f=0;f<p;f++)
		{
			if(tabK[f]!=NULL)
			printf("%i ", tabK[f]);
		}
	
	getchar();
	return 0;
}
