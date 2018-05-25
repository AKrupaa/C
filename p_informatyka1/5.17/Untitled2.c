/*Napisz program, który policzy elementy tablicy zadeklarowanej przez programistê. 
Zaproponuj sposób oznaczenia koñca tablicy. Czy w jêzyku C istnieje funkcja podaj¹ca d³ugoœæ tablicy?*/

#include <stdio.h>

int main()
{
	int rozmiar;
	int suma=0;
	int liczba;
	printf("Program liczy elemnty tablicy\nPodaj dlugosc tablicy ");
	scanf("%i",&rozmiar);
	int tab[rozmiar];
	for(int i=0;i<rozmiar;i++)
	{
		//licze liczbe elementow
		suma+=1;
	}
	printf("Rozmiar tablicy wynosi %i\n",suma);
	//Czy w jêzyku C istnieje funkcja podaj¹ca d³ugoœæ tablicy?
	//znam sizeof();
	int n = sizeof(tab)/sizeof(tab[rozmiar]);
		printf("Rozmiar tablicy wynosi %i", n);
	getchar();
	return 0;
}
