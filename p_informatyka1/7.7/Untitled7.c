/*
Napisz program, kt�ry dla dw�ch podanych z klawiatury warto�ci wy�wietla w oddzielnych liniach ich 
sum�, r�nic�, iloczyn i iloraz. 
Do wyznaczania wszystkich czterech dzia�a� napisz oddzielne funkcje.
*/
#include <stdio.h>

float suma(float a,float b)
{
	return a+b;
}

float roznica(float a,float b)
{
	return a-b;
}

float iloczyn(float a,float b)
{
	return a*b;
}

float iloraz(float a,float b)
{
	return a/b;
}




int main()
{
	float argument;
	float argument1;
	printf("Podaj liczbe1: ");
	scanf("%f",&argument);
	
	printf("Podaj liczbe2: ");
	scanf("%f",&argument1);
	printf("Suma: %f\n",suma(argument,argument1));
	printf("Roznica: %f\n", roznica(argument,argument1));
	printf("Iloczyn: %f\n", iloczyn(argument,argument1));
	printf("Iloraz: %f", iloraz(argument,argument1));
	return 0;
}
