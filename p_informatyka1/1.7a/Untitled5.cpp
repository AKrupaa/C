//Napisz program wczytujący od użytkownika jedną wartość zmiennoprzecinkową, za pomocą funkcji scanf. 
//Wpisaną wartość wyświetl na ekranie. Wyświetl w nowej linii również jej dziesięciokrotność.

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
