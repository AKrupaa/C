#include <stdio.h>
#include <ctype.h>
#include <math.h>

int czy_pierwsza(int liczba)
{
	if(liczba<=1) return 0;
	int i;
	for(i=2;i<=sqrt(liczba);i++)
		if(liczba%i==0)	return 0;
	
	return 1;
}

void mersenne(int from, int to)
{
	int i;
	int count=1;
	for(i=from;i<=to;i++)
	{
		if(czy_pierwsza(i))
		printf("%i. %.0f\n", count++,pow(2,i)-1);
	}
}

int main()
{
	int a,b,c;
	printf("Podaj przedzial <a,b>\n");
	do
	{
		printf("Wprowadz a,b: ");
		c=scanf("%i%i",&a,&b);
		fflush(stdin);
	} while(a<0||c!=2);
	printf("Kolejne liczby Mersenne'a:\n");
	mersenne(a, b);
	
	return 0;
}
