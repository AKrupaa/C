/*Napisz program, który na podstawie zmiennej ca³kowitej pobranej od u¿ytkownika (z zakresu 1-7) 
okreœla czy jest to dzieñ roboczy czy weekend. Program powinien wyœwietlaæ komunikat „Dzieñ roboczy”, 
b¹dŸ „Weekend”, a w przypadku liczby spoza zakresu „Error”.*/

#include <stdio.h>
#include <conio.h>

int main()
{
	int i;
	printf("Wprowadz liczbe z przedzialu 1 - 7\n");
	scanf("%d", &i);
	switch (i)
	{
	case 1: printf("Dzieñ roboczy");
		break;
	case 2: printf("Dzieñ roboczy");
		break;
	case 3: printf("Dzieñ roboczy");
		break;
	case 4: printf("Dzieñ roboczy");
		break;
	case 5: printf("Dzieñ roboczy");
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