/*
Napisz funkcjê zwracaj¹c¹ sumê dwóch liczb ca³kowitych. 
Napisz program, który zapyta u¿ytkownika o wprowadzenie dwóch liczb, 
a nastêpnie wywo³a funkcjê przekazuj¹c obie liczby jako jej argumenty. 
Na koniec program powinien wyœwietliæ wyliczon¹ sumê.
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
