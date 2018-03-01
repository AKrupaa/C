#include <stdio.h>

float obwod_kola(float a)
{
	return (3.14*a);
}


int main()
{
	float argument;
	printf("Podaj srednica kola: ");
	scanf("%f",&argument);
	printf("Wynik funkcji: %f", obwod_kola(argument));
	return 0;
}
