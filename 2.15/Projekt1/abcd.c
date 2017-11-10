/*Napisz program, który sprawdza tożsamość wyrażenia :
	(a + b)(a−b) = a^2 + b^2
Pobierz od użytkownika liczby rzeczywiste a oraz b i sprawdź dla nich tą tożsamość.
Jeśli równość zachodzi wyświetl napis “tożsamość jest prawdziwa”, 
w przeciwnym wypadku wyświetl “tożsamość nie jest prawdziwa”.*/

#include <stdio.h>

int main()
{
	float a, b;
	printf("(a+b)*(a-b) = a^2 + b^2\n Wprowadz liczby a, b: ");
	scanf("%f", &a); 
	scanf("%f", &b);

	if (((a + b)*(a - b)) == (a*a) + (b*b))
	{
		printf("Tozsamosc prawdziwa");
	}
	else
	{
		printf("Tozsamosc nie jest prawdziwa");
	}

	return 0;
}
