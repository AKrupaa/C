//Napisz program wczytuj�cy od u�ytkownika jedn� warto�� zmiennoprzecinkow�, za pomoc� funkcji scanf. 
//Wpisan� warto�� wy�wietl na ekranie. Wy�wietl w nowej linii r�wnie� jej dziesi�ciokrotno��.

#include <stdio.h>

int main()
{
	
	float a;
	printf("Podaj jakas liczbe: ");
	scanf("%f", &a);
	printf("%f \n", a);
	printf("Dziesieciokrotnosc tej liczby %f \n", a*10);
	
return 0;	
}
