/*
Napisz funkcjê wyznaczaj¹c¹ wartoœæ wielomianu...
*/

#include <stdio.h>

float wielomian(float a)
{
	return ((5*a*a) + (12.55*a) + 0.75);
}


int main()
{
	printf("Wprowadz x: ");
	float x;
	scanf("%f",&x);
	printf("Wynik: %f", wielomian(x));
	return 0;
}
