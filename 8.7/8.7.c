#include <stdio.h>

int NWD(int a, int b);

int main()
{
	int a; int b;
	printf("Podaj a: ");
	scanf("%i",&a);
	printf("Podaj b: ");
	scanf("%i",&b);
	
	printf("Wynik= %lu\n", NWD(a, b));
	return 0;
}
/*
NWD(a, b) = a dla b = 0
NWD(b, a mod b) dla b > 1
*/

int NWD(int a, int b)
{
	int nwd;
	if(b==0)
	{
		return a;
	}
	if(b>1)
	{
		nwd=NWD(b,a%b);
	}
	
	return nwd;
}
