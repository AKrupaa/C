/*Napisz program wyœwietlaj¹cy na podstawie liczby ca³kowitej (z zakresu 1 - 7) 
pobranej od u¿ytkownika s³own¹ nazwê odpowiadaj¹cego jej dnia tygodnia. Dzieñ tygodnia powinien byæ 
wypisany ma³ymi literami oraz bez polskich znaków. Podanie innej wartoœci powinno skutkowaæ wypisaniem s³owa “Error”.*/

#include <stdio.h>
#include <conio.h>

int main()
{
	int i;
	printf("Wprowadz liczbe z przedzialu 1 - 7\n");
	scanf("%d", &i);
	switch (i)
	{
	case 2: printf("Wtorek");
		break;
	case 3: printf("Sroda");
		break;
	case 4: printf("Czwartek");
		break;
	case 5: printf("Piatek");
		break;
	case 6: printf("Sobota");
		break;
	case 7: printf("Niedziela");
		break;
	case 1: printf("Poniedzialek");
		break;

	default: printf("Error");
	}

	_getch();
	return 0;
}
