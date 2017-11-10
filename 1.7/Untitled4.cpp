//Napisz program wczytuj¹cy od u¿ytkownika jedn¹ wartoœæ ca³kowit¹, za pomoc¹ funkcji scanf. 
//Wpisan¹ wartoœæ wyœwietl na ekranie. Wyœwietl w nowej linii równie¿ jej dziesiêciokrotnoœæ.

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
