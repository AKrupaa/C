#include <stdio.h>
#include <math.h>
/*Zadanie 1.11

Dany jest wektor R3 o warto�ci (a,b,c). 
Warto�ci zmiennych a, b, c typu ca�kowitego nale�y wczyta� z klawiatury. 
Podpowied�: do wyznaczania pierwiastka s�u�y funkcja sqrt, 
kt�rej prototyp znajduje si� w pliku nag��wkowym math.h*/
int main()
{
	int a, b, c;
	printf("Wprowadz wartosci wektora R3 (a,b,c)\na= ");
	scanf("%d", &a);
	printf("\nb= ");
	scanf("%d", &b);
	printf("\nc= ");
	scanf("%d", &c);
	int wynik = sqrt(a*a + b*b + c*c);
	printf("|R3|= %d", wynik);
	getch();
	return 0;
}
