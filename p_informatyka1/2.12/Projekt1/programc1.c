/*Napisz program wyznaczaj�cy pierwiastki r�wnania kwadratowego. 
Program ma oczekiwa� od u�ytkownika podania wsp�czynnik�w a, b i c, a nast�pnie 
wy�wietla� informacj� s�own� o liczbie pierwiastk�w rzeczywistych (�brak�, �jeden�, �dwa� lub �nieskonczonosc�) 
oraz wy�wietla� ich po�o�enie w dziedzinie zmiennej x.*/

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
