//Napisz program wczytuj�cy od u�ytkownika jedn� warto�� ca�kowit�, za pomoc� funkcji scanf. 
//Wpisan� warto�� wy�wietl na ekranie. Wy�wietl w nowej linii r�wnie� jej dziesi�ciokrotno��.

#include <stdio.h>

int main()
{
	int a;
	printf("Podaj jakas liczbe: ");
	scanf("%d", &a);
	printf("%d \n", a);
	printf("Dziesieciokrotnosc tej liczby %d \n", a*10);
	
	

return 0;	
}
