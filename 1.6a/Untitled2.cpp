/*Zdefiniuj dwie zmienne typu int i przypisz do nich dowolne wartoœci. 
Wyœwietl te liczby w jednej linii oddzielone spacjami. 
Dla wszystkich zmiennych, wyœwietl iloczyn, iloraz, sumê oraz ró¿nicê ich wartoœci. 
Iloraz wyœwietl z dok³adnoœci¹ do dwóch miejsc po przecinku. */

#include <stdio.h>

int main()
{
	int a=1;
	int b=2;
	
	printf("liczba a= %d     liczba b= %d\n", a, b);
	//  \/konwertowanie danych ;p
	float af=a;
	float bf=b;
	
		int iloczyn=(a*b);
		float iloraz=(af/bf);
		float iloraz2=(bf/af);
		int suma=a+b;
		int roznica=(a-b);
		int roznica2=(b-a);
		
		printf("Iloczyn wynosi: %d\n", iloczyn);
		printf("Iloraz a/b wynosi: %.2f\n", iloraz);
		printf("Iloraz b/a wynosi: %.2f\n", iloraz2);
		printf("Suma wynosi: %d\n", suma);
		printf("Roznica a-b wynosi: %d\n", roznica);
		printf("Roznica b-a wynosi: %d\n", roznica2);

	return 0;
}
