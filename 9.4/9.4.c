#include <stdio.h>
#include "vector_utils.h"
#define MAX 150

void insertion_sort_desc(int tab[], int size)
{
	//8 4 1 6 9
	//display_vector(tab, size);
	int temp;
	for(int i=1;i<size;i++)
	{
		int wez=tab[i];
		for(int j=i-1;j>=0;j--)
		{
			if(tab[j]<wez)
			{
				temp=tab[j];
				tab[j]=wez;
				tab[j+1]=temp;
				wez=tab[j];
			}
		}
		//	display_vector(tab, size);
	}
	display_vector(tab, size);
}
void insertion_sort_asc(int tab[], int size)
{
	//8 4 1 6 9
	//4 8 1 6 9
	//4 1 8 6 9
	//1 4 9 6 9
	//wez=8;
	//wez 8, sprawdz ze wszystkimi, wez 4 sprawdz ze wszystkimi...
	//display_vector(tab, size);
	int temp;
	for(int i=1;i<size;i++)
	{
		int wez=tab[i];
		for(int j=i-1;j>=0;j--)
		{
			if(tab[j]>wez)
			{
				temp=tab[j];
				tab[j]=wez;
				tab[j+1]=temp;
				wez=tab[j];
			}
		}
	//		display_vector(tab, size);
	}
	display_vector(tab, size);
}

void insertion_sort(int tab[], int size, int dir)
{
	// Przyjmij, ¿e 1 oznacza rosn¹co, a 2 malej¹co.
	if(dir==1) insertion_sort_asc(tab,size);
	if(dir==2) insertion_sort_desc(tab,size);
}



int main()
{
	int kierunek;
	int tab1[MAX];
	printf("Podaj wektor: ");
	int sizetab1=read_vector(tab1, MAX, 0);
	printf("Podaj kierunek sortowania: ");
	scanf("%i",&kierunek);
	insertion_sort(tab1,sizetab1,kierunek);
	
	return 0;
}
