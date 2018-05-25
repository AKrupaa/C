#include <stdio.h>
#include <math.h>
/*Zadanie 1.11

Dany jest wektor R3 o wartoœci (a,b,c). 
Wartoœci zmiennych a, b, c typu ca³kowitego nale¿y wczytaæ z klawiatury. 
PodpowiedŸ: do wyznaczania pierwiastka s³u¿y funkcja sqrt, 
której prototyp znajduje siê w pliku nag³ówkowym math.h*/
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
