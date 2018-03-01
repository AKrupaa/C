//Napisz program wczytuj¹cy od u¿ytkownika jedn¹ wartoœæ zmiennoprzecinkow¹, za pomoc¹ funkcji scanf. 
//Wpisan¹ wartoœæ wyœwietl na ekranie. Wyœwietl w nowej linii równie¿ jej dziesiêciokrotnoœæ.

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
