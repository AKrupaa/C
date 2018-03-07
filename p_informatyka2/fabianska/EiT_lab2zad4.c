#include <stdio.h>

int suma(int *x, int *y)
{
	int temp;
	temp=*x+*y;
	if(temp)
	return 1;
	else return 0;
}

int roznica(int *x, int *y)
{
	int temp;
	temp=*x-*y;
	if(temp)
	return 1;
	else return 0;
}

int iloczyn(int *x, int *y)
{
	int temp;
	temp=*x * *y;
	if(temp)
	return 1;
	else return 0;
}

int iloraz(int *x, int *y)
{
	int temp;
	temp=*x / *y;
	if(temp)
	return 1;
	else return 0;
}


int main()
{
	int a,b;
	printf("Wprowadz dwie liczby: a oraz b\nWprowadz a: ");
	scanf("%i",&a);
	printf("Wprowadz b: ");
	scanf("%i",&b);
	
	printf("SUMA: %i\n", suma(&a, &b));
	printf("ROZNICA: %i\n", roznica(&a, &b));
	printf("ILOCZYN: %i\n", iloczyn(&a, &b));
	printf("ILORAZ: %i ", iloraz(&a, &b));
	return 0;
}
