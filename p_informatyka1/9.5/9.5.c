#include <stdio.h>
#include <conio.h>
#include "vector_utils.h"
#include "sort.h"
#define MAX 150

int main()
{
	int kierunek;
	int tab1[MAX];
	printf("Podaj wektor: ");
	int sizetab1=read_vector(tab1, MAX, 0);
	printf("1 - rosnaco\n2 - malejaco\n");
	printf("Podaj kierunek sortowania: ");
	scanf("%i",&kierunek);
	int metoda;
	printf("1 - babelkowe\n2 - wybieranie\n3 - wstawianie\n");
	printf("Podaj metode sortowania: ");
	scanf("%i",&metoda);
	switch(metoda)
	{
		case 1: bubble_sort(tab1, sizetab1, kierunek);
		break;
		case 2: selection_sort(tab1, sizetab1, kierunek);
		break;
		case 3: insertion_sort(tab1, sizetab1, kierunek);
		break;
		default: printf("Error");
	}
	
	getch();
	return 0;
}
