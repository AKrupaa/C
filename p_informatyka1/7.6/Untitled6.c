/*
Utw�rz wariant programu z zadania 7.5, w kt�rym funkcja sumuj�ca b�dzie dzia�a� na liczbach zmiennoprzecinkowych
*/
#include <stdio.h>

float suma(float a,float b)
{
	return a+b;
}


int main()
{
	float argument;
	float argument1;
	printf("Podaj liczbe1: ");
	scanf("%f",&argument);
	
	printf("Podaj liczbe2: ");
	scanf("%f",&argument1);
	printf("Wynik: %f",suma(argument,argument1));
	return 0;
}
