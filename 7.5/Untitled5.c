/*
Napisz funkcj� zwracaj�c� sum� dw�ch liczb ca�kowitych. 
Napisz program, kt�ry zapyta u�ytkownika o wprowadzenie dw�ch liczb, 
a nast�pnie wywo�a funkcj� przekazuj�c obie liczby jako jej argumenty. 
Na koniec program powinien wy�wietli� wyliczon� sum�.
*/
#include <stdio.h>

int suma(int a,int b)
{
	return a+b;
}


int main()
{
	int argument;
	int argument1;
	printf("Podaj liczbe1: ");
	scanf("%i",&argument);
	
	printf("Podaj liczbe2: ");
	scanf("%i",&argument1);
	printf("Wynik: %i",suma(argument,argument1));
	return 0;
}
