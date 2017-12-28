#include <stdio.h>

int clamp(int v, int lo, int hi)
{
	if(v>=lo&&v<=hi)
	{
		return v;
	}
	
	if(v<lo)
	{
		return lo;
	}
	
	if(v>hi)
	{
		return hi;
	}
}

int main()
{
	int liczba,granica1,granica2;
	printf("Podaj liczbe: ");
	scanf("%i",&liczba);
	printf("Podaj pierwsza granice: ");
	scanf("%i",&granica1);
	printf("Podaj druga granice: ");
	scanf("%i",&granica2);	
	
	if(granica1>granica2)
	{
		printf("%i ",clamp(liczba,granica2,granica1));
	}
	else
	{
		printf("%i ",clamp(liczba,granica1,granica2));
	}
	
	return 0;
}
