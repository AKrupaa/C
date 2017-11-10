/*Napisz program wyznaczaj¹cy i wyœwietlaj¹cy wartoœæ wyra¿enia f(x) dla wartoœci x (liczba zmiennoprzecinkowa) 
podanej z klawiatury.*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	printf("Wprowadz x: ");
	float x;
	scanf("%f", &x);
	if ((x >= -5) && (x <= 5))
	{
		//printf("\n a= %f", x);
		float f = (2 * x*x) + (3 * x) - 1;
		printf("f(x)=%f", f);
	}
	else if (x < 5)
		{
		//printf("\n a= %f", x);
		float f = ((x + 5)*(x + 5)) - 10;
		printf("f(x)=%f", f);
		}
		else
		{ 
			//printf("\n a= %f", x);
			float f = (((x / 2) + 2)*(2 - (3 * x / 4)));
			printf("f(x)=%f", f);
		}
	
	_getch();
	return 0;
}