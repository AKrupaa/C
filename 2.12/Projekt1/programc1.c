/*Napisz program wyznaczaj¹cy pierwiastki równania kwadratowego. 
Program ma oczekiwaæ od u¿ytkownika podania wspó³czynników a, b i c, a nastêpnie 
wyœwietlaæ informacjê s³own¹ o liczbie pierwiastków rzeczywistych (“brak”, “jeden”, “dwa” lub “nieskonczonosc”) 
oraz wyœwietlaæ ich po³o¿enie w dziedzinie zmiennej x.*/

#include <stdio.h>
#include <conio.h>
int main()
{
	// ax^2 +bx + c= 0
	float a, b, c, delta, x0, x1, x2;
	printf("Podaj a, b, c rownania kwadratowego\n y=ax^2 + bx + c \n a= ");
	scanf("%f", &a);
	printf(" b= ");
	scanf("%f", &b);
	printf(" c= ");
	scanf("%f", &c);
	if (a != 0)
	{
		delta = (b*b) - (4 * a*c);
		if (delta > 0)
		{
			printf("dwa");
		}
		else if (delta = 0)
			{
			printf("jeden");
			}
			else
			{
				printf("nieskonczonosc");
			}
	}
	else
	{
		printf("blad: a=0");
	}
	getch();
	return 0;
}
