/* Zdefiniuj dwie zmienne typu float i przypisz do nich dowolne wartoœci. 
Wyœwietl te liczby w jednej linii oddzielone spacjami. 
Dla wszystkich zmiennych, wyœwietl iloczyn, iloraz, sumê oraz ró¿nicê ich wartoœci. 
Iloraz wyœwietl z dok³adnoœci¹ do dwóch miejsc po przecinku. */

#include <stdio.h>

int main()
{
	float af=5;
	float bf=12;
	
		printf("liczba af= %f     liczba bf= %f\n", af, bf);
		
		int iloczyn=(af*bf);
		float iloraz=(af/bf);
		float iloraz2=(bf/af);
		int suma=af+bf;
		int roznica=(af-bf);
		int roznica2=(bf-af);
		
		printf("Iloczyn wynosi: %d\n", iloczyn);
		printf("Iloraz a/b wynosi: %.2f\n", iloraz);
		printf("Iloraz b/a wynosi: %.2f\n", iloraz2);
		printf("Suma wynosi: %d\n", suma);
		printf("Roznica a-b wynosi: %d\n", roznica);
		printf("Roznica b-a wynosi: %d\n", roznica2);

	return 0;
}
