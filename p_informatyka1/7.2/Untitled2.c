#include <stdio.h>

int test2(int a)
{
	return a*a;
}


int main()
{
	int argument;
	printf("Podaj argument: ");
	scanf("%i",&argument);
	printf("Wynik funkcji: %i", test2(argument));
	return 0;
}
