/*
Napisz program, kt�ry pobierze od u�ytkownika 10 liczb (w�r�d nich 4 liczby parzyste), 
a nast�pnie uszereguje go w taki spos�b, 
�eby w ci�gu wyj�ciowym w kom�rkach o indeksach 0, 3, 6 � znajdowa�y si� elementy parzyste. 
Program ma wypisa� powsta�y ci�g oddzielaj�c kolejne elementy spacjami i zako�czy� si� z kodem powrotu 0. 
Je�li dane wej�ciowe nie b�d� spe�nia�y za�o�e� zadania, program ma wy�wietli� napis �BLAD� i zako�czy� si� z kodem powrotu 1. 
*/

#include <stdio.h>

int main()
{
	const int max=10;
	int tab[10];
	int tabP[10];
	int tabN[10];
	int p=0;
	int liczba;
	int suma=0;
	int o=0;
	printf("Wprowadz 10 liczb (wsrod nich 4 liczby parzyste!) po spacji: \n");
	for(int i=0;i<max;i++)
	{
		scanf("%i",&liczba);
		tab[i]=liczba;
		if(liczba%2==0)
		{
			tabP[o++]=liczba;
			suma+=1;
		}
		else
		{
			tabN[p++]=liczba;
		}
		
	}
	for(int i=0;i<max;i++)
	printf("%i ", tab[i]);
	printf("\nSUMA = %i\n", suma);
	int temp;
	if(suma!=4)
	{
		printf("BLAD\nKod powrotu = 1");
	}
	else
	{
		//�eby w ci�gu wyj�ciowym w kom�rkach o indeksach 0, 3, 6 � znajdowa�y si� elementy parzyste
		//tabP[o] - zawiera parzyste
		//tabN[p] -zawiera nieparzyste
		//tab[max] - zawiera wszystkie
		o=0;
		p=0;
		for(int q=0;q<max;q++)
		{
			if(q%3==0)
			{
				tab[q]=tabP[o++];
			}
			else
			{
				tab[q]=tabN[p++];
			}
		}
	}
	for(int q=0;q<max;q++)
	{
		printf("%i ",tab[q]);
	}
	
	/*
	wstaw w else - nie dziala
	for(int i=0;i<max;i+=3)
		{
			if(tab[i]%2!=0)
			{
				for(int k=i+1;k<max;k++)
				{
					if(tab[k]%2==0)
					{
						temp=tab[i];
						tab[i]=tab[k];
						tab[k]=temp;
					}
				}
			}
	*/
	
	
	return 0;
}
