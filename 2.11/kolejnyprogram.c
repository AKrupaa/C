/*Napisz program, który dla wartoœci z zakresu 0-10, podanych przez u¿ytkownika, 
wyœwietli jego s³own¹ reprezentacjê (np. „zero”), bez polskich znaków. 
W przypadku wartoœci spoza zakresu, program ma wyœwietliæ komunikat o b³êdzie (“blad”).*/

#include <stdio.h>

int main()
{
	printf("Wprowadz liczbe z zakresu 0-10: ");
	int a;
	scanf("%d", &a);
	if (a >= 0 && a <= 10)
	{
		if (a == 0)
		{
			printf("zero");
		}
		if (a == 1)
		{
			printf("jeden");
		}
		if (a == 2)
		{
			printf("dwa");
		}
		if (a == 3)
		{
			printf("trzy");
		}
		if (a == 4)
		{
			printf("cztery");
		}
		if (a == 5)
		{
			printf("piec");
		}
		if (a == 6)
		{
			printf("szesc");
		}
		if (a == 7)
		{
			printf("siedem");
		}
		if (a == 8)
		{
			printf("osiem");
		}
		if (a == 9)
		{
			printf("dziewiec");
		}
		if (a == 10)
		{
			printf("dziesiec");
		}
	}
	else
	{
		printf("\nblad");
	}
	return 0;
}
