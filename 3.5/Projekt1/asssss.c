/*Napisz program, kt�ry na podstawie zmiennej ca�kowitej pobranej od u�ytkownika (z zakresu 1-7) 
okre�la czy jest to dzie� roboczy czy weekend. Program powinien wy�wietla� komunikat �Dzie� roboczy�, 
b�d� �Weekend�, a w przypadku liczby spoza zakresu �Error�.*/

#include <stdio.h>
#include <conio.h>

int main()
{
	int i;
	printf("Wprowadz liczbe z przedzialu 1 - 7\n");
	scanf("%d", &i);
	switch (i)
	{
	case 1: printf("Dzie� roboczy");
		break;
	case 2: printf("Dzie� roboczy");
		break;
	case 3: printf("Dzie� roboczy");
		break;
	case 4: printf("Dzie� roboczy");
		break;
	case 5: printf("Dzie� roboczy");
		break;
	case 6: printf("Weekend");
		break;
	case 7: printf("Weekend");
		break;

	default: printf("Error");
	}

	_getch();
	return 0;
}