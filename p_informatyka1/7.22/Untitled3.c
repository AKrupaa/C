#include <stdio.h>
#include <math.h>

float silnia(int k)
{
	float silnia1=1;
	for(int i=k;i>0;i--)
	{
		silnia1*=i;
	}
	return silnia1;
}

float sinus(int n, float x)
{
	float suma=0;
	for(int k=0;k<=n;k++)
	{
		suma+=((pow(-1,k)) / (silnia((2*k)+1)) * pow(x,((2*k)+1)));
	}
	return suma;
}

float cosinus(int n, float x)
{
	float suma=0;
	for(int k=0;k<=n;k++)
	{
		suma+=((pow(-1,k)) / (silnia(2*k)) * pow(x,(2*k)));
	}
	return suma;
}


int main()
{
	float x;
	int n;
	printf("Podaj wartosc kata, dla ktorego chcesz obliczyc wartosc funkcji sin i cos: ");
	scanf("%f",&x);
	printf("Podaj liczbe wyrazow szegegu Taylora: ");
	scanf("%i",&n);
	
	printf("sin: %f cos: %f", sinus(n,x),cosinus(n,x));
	
	return 0;
}
