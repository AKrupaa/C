#include <stdio.h>
#include "vector_utils.h"
#define MAX 150

void bubble_sort_desc(int tab[], int size)
{
	int temp;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-1;j++)
		{
			if(tab[j]<tab[j+1])
			{
				temp=tab[j+1];
				tab[j+1]=tab[j];
				tab[j]=temp;
			}
		}
	}
	display_vector(tab, size);
}
void bubble_sort_asc(int tab[], int size)
{
	int temp;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-1;j++)
		{
			if(tab[j]>tab[j+1])
			{
				temp=tab[j+1];
				tab[j+1]=tab[j];
				tab[j]=temp;
			}
		}
	}
	display_vector(tab, size);
}

void bubble_sort(int tab[], int size, int dir)
{
	// Przyjmij, ¿e 1 oznacza rosn¹co, a 2 malej¹co.
	if(dir==1) bubble_sort_asc(tab,size);
	if(dir==2) bubble_sort_desc(tab,size);
}

int main()
{
	int kierunek;
	int tab1[MAX];
	printf("Podaj wektor: ");
	int sizetab1=read_vector(tab1, MAX, 0);
	printf("Podaj kierunek sortowania: ");
	scanf("%i",&kierunek);
	bubble_sort(tab1,sizetab1,kierunek);
	
	return 0;
}
