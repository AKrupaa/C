#include <stdio.h>

float funkcja(float a, float b, float c, float x)
{
	while(a<-20||a>20)
	{
		printf("Warto�� 'a' poza zakresem. Spr�buj ponownie: "); scanf("%f",&a);
	}
	
	while(b>300||b<-100)
	{
		printf("Warto�� 'b' poza zakresem. Spr�buj ponownie: "); scanf("%f",&b);
	}
	
	while(c<-1000||c>4000)
	{
		printf("Warto�� 'c' poza zakresem. Spr�buj ponownie: "); scanf("%f",&c);
	}
	
	while(x<-10||x>10)
	{
		printf("Warto�� 'x' poza zakresem. Spr�buj ponownie: "); scanf("%f",&x);
	}
	
	float wynik=(a*x*x)+(b*x)+(c);		
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
	printf("Wynik= %f",funkcja(a,b,c,x));
	return 0;
}
