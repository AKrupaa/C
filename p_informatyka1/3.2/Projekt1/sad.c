/*Napisz program wy�wietlaj�cy na podstawie liczby ca�kowitej (z zakresu 1 - 7) 
pobranej od u�ytkownika s�own� nazw� odpowiadaj�cego jej dnia tygodnia. Dzie� tygodnia powinien by� 
wypisany ma�ymi literami oraz bez polskich znak�w. Podanie innej warto�ci powinno skutkowa� wypisaniem s�owa �Error�.*/

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
