#include <stdio.h>

float funkcja(float a, float b, float c, float x)
{
	float wynik;
	wynik=(a*x*x)+(b*x)+(c);
	return wynik;
}


int main()
{
	float a, b, c, x;
	printf("Wprowadz a, b, c oraz x do y=ax^2+bx+c\n");
	printf("Wprowadz a: ");
	scanf("%f",&a);
	printf("Wprowadz b: ");
	scanf("%f",&b);
	printf("Wprowadz c: ");
	scanf("%f",&c);
	printf("Wprowadz x: ");
	scanf("%f",&x);
	printf("Wynik: %f", funkcja(a,b,c,x));
	return 0;
}
