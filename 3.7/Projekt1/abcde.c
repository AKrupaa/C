/*Napisz program, kt�ry pobiera od u�ytkownika kwot� w z�otych, 
a nast�pnie przelicza j� na wybran� przez u�ytkownika walut�(funty, dolary, euro).*/

#include <stdio.h>
#include <conio.h>

//1 funt (GBP) = 4.7652 z� (PLN)
//1 dolar ameryka�ski = 3,60055449 z�otego polskiego
//1 euro = 4,26660306 z�otego polskiego
//Aktualne kursy z 11. 10. 2017, godzina: 20 : 56.


int main()
{
	float i;
	printf("Program przelicza kwote podana w PLN na funty, dolary, euro\n Wprowadz kwote (PLN): ");
	scanf("%f", &i);
	printf("\nPLN -> Funt (GBP)= %.2f", i*4,76);
	printf("\nPLN -> Dolar amerykanski= %.2f", i*3.60);
	printf("\nPLN -> Euro= %.2f", i*4.266);

	_getch();
	return 0;
}