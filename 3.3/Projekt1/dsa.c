/*Napisz program wyœwietlaj¹cy na podstawie liczby ca³kowitej (z zakresu 1 - 12) 
pobranej od u¿ytkownika s³own¹ nazwê odpowiadaj¹cego jej miesi¹ca. 
Miesi¹c powinien byæ wypisany ma³ymi literami oraz bez polskich znaków. 
Podanie innej wartoœci powinno skutkowaæ wypisaniem s³owa “Error”.*/

#include <stdio.h>
#include <conio.h>

int main()
{
	int i;
	printf("Wprowadz liczbe z przedzialu 1 - 12\n");
	scanf("%d", &i);
	switch (i)
	{
	case 1: printf("Styczen");
		break;
	case 2: printf("Luty");
		break;
	case 3: printf("Marzec");
		break;
	case 4: printf("Kwiecien");
		break;
	case 5: printf("Maj");
		break;
	case 6: printf("Czerwiec");
		break;
	case 7: printf("Lipiec");
		break;
	case 8: printf("Sierpien");
		break;
	case 9: printf("Wrzesien");
		break;
	case 10: printf("Pazdziernik");
		break;
	case 11: printf("Listopad");
		break;
	case 12: printf("Grudzien");
		break;

	default: printf("Error");

	}

	_getch();
	return 0;
}