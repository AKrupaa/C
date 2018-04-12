#include <stdio.h>

extern void bubble_sort_desc(int tab[], int size)
{
	int posortowane=0;
	int temp;
	for(int i=0;i<size&&posortowane==0;i++)
	{
		int zamiana=0;
		for(int j=0;j<size-1-i;j++)
		{
			if(tab[j]<tab[j+1])
			{
				temp=tab[j+1];
				tab[j+1]=tab[j];
				tab[j]=temp;
				zamiana=1;
			}
		}
		if(zamiana==0) posortowane=1;
	}
	display_vector(tab, size);
}

extern void bubble_sort_asc(int tab[], int size)
{
	int posortowane=0;
	int temp; 
	for(int i=0;i<size&&posortowane==0;i++)
	{
		int zamiana=0;
		for(int j=0;j<size-1-i;j++)
		{
			if(tab[j]>tab[j+1])
			{
				temp=tab[j+1];
				tab[j+1]=tab[j];
				tab[j]=temp;
				zamiana=1;
			}
		}
		if(zamiana==0) posortowane=1;
	}
	display_vector(tab, size);
}

extern void bubble_sort(int tab[], int size, int dir)
{
	// Przyjmij, ?e 1 oznacza rosn?co, a 2 malej?co.
	if(dir==1) bubble_sort_asc(tab,size);
	if(dir==2) bubble_sort_desc(tab,size);
}

//------------------------------------------------------------------

extern int find_min(int tab[], int size, int start_index)
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

extern int find_max(int tab[], int size, int start_index)
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

extern void selection_sort_desc(int tab[], int size)
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
extern void selection_sort_asc(int tab[], int size)
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

extern void selection_sort(int tab[], int size, int dir)
{
	// Przyjmij, ?e 1 oznacza rosn?co, a 2 malej?co.
	if(dir==1) selection_sort_asc(tab,size);
	if(dir==2) selection_sort_desc(tab,size);
}

//------------------------------------------------------------------

extern void insertion_sort_desc(int tab[], int size)
{
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
	}
	display_vector(tab, size);
}
extern void insertion_sort_asc(int tab[], int size)
{
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
	}
	display_vector(tab, size);
}

extern void insertion_sort(int tab[], int size, int dir)
{
	// Przyjmij, ?e 1 oznacza rosn?co, a 2 malej?co.
	if(dir==1) insertion_sort_asc(tab,size);
	if(dir==2) insertion_sort_desc(tab,size);
}
