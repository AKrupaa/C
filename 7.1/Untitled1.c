#include <stdio.h>
#include <conio.h>

int test1(int a)
{
	return a;
}

int main()
{
	int argument;
	printf("Podaj argument: ");
	scanf("%i",&argument);
	printf("Wynik funkcji: %i", test1(argument));
	return 0;
}
