/*Napisz program, kt�ry policzy elementy tablicy zadeklarowanej przez programist�. 
Zaproponuj spos�b oznaczenia ko�ca tablicy. Czy w j�zyku C istnieje funkcja podaj�ca d�ugo�� tablicy?*/

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
	//Czy w j�zyku C istnieje funkcja podaj�ca d�ugo�� tablicy?
	//znam sizeof();
	int n = sizeof(tab)/sizeof(tab[rozmiar]);
		printf("Rozmiar tablicy wynosi %i", n);
	getchar();
	return 0;
}
