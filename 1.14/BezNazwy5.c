/*
Napisz program, kt�ry poprosi u�ytkownika o 
podanie liczby zmiennoprzecinkowej (x) a nast�pnie 
wyznaczy i wy�wietli warto�� nast�puj�cego wielomianu:
y=2x^3-4x^2+3x-7
*/


#include <stdio.h>

int main()
{
	float x;
	printf("Aby policzyc nastepujacy wielomian:\n y=2x^3-4x^2+3x-7\n Podaj zmienna x: ");
	scanf("%f", &x);
	printf("y= %f", ((2*x*x*x)-(4*x*x)+(3*x)-7));
	return 0;
}
