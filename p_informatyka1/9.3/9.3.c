#include <stdio.h>
#include "vector_utils.h"
#define MAX 150

int find_min(int tab[], int size, int start_index)
{
	// 5 4 3 1 7 8 2 3 4 5 2 1 9
	int min=tab[start_index];
	int indeks=start_index;
	for(int i=start_index;i<size;i++)
	{
		if(tab[i] < min)
		{
			min=tab[i];
			indeks=i;
		}
	}
	
	return indeks;
}

	// 5 4 3 1 7 8 2 3 4 5 2 1 9
int find_max(int tab[], int size, int start_index)
{
	int max = tab[start_index];
	int indeks=start_index;
	for(int i=start_index;i<size;i++)
	{
		if(tab[i] > max)
		{
			max=tab[i];
			indeks=i;
		}
	}
	
	return indeks;
}

void selection_sort_desc(int tab[], int size)
{
	int temp; 
	int indeks_max;
	for(int i=0;i<size;i++)
	{
		// 5 4 3 1 7 8 2 3 4 5 2 1 9
		// 9 8 7 1 3 4 2 3 4 5 2 1 5
		indeks_max= find_max(tab, size, i);
		if(indeks_max>i)
		{
			temp=tab[i];
			tab[i]=tab[indeks_max];
			tab[indeks_max]=temp;
		}
	}
	
	display_vector(tab, size);
}
void selection_sort_asc(int tab[], int size)
{
	int temp; 
	int indeks_min;
	for(int i=0;i<size;i++)
	{
			indeks_min= find_min(tab, size, i);
			if(indeks_min>i)
			{
				temp=tab[i];
				tab[i]=tab[indeks_min];
				tab[indeks_min]=temp;
			}
	}
	display_vector(tab, size);	
}

void selection_sort(int tab[], int size, int dir)
{
	// Przyjmij, ¿e 1 oznacza rosn¹co, a 2 malej¹co.
	if(dir==1) selection_sort_asc(tab,size);
	if(dir==2) selection_sort_desc(tab,size);
}



int main()
{
	int kierunek;
	int tab1[MAX];
	printf("Podaj wektor: ");
	int sizetab1=read_vector(tab1, MAX, 0);
	printf("Podaj kierunek sortowania: ");
	scanf("%i",&kierunek);
	selection_sort(tab1,sizetab1,kierunek);
	
	return 0;
}
