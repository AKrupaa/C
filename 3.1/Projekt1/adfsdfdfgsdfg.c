//Napisz program o funkcjonalno�ci programu z zadania 2.11 z u�yciem instrukcji switch� case.

/*Zadanie 2.11

Napisz program, kt�ry dla warto�ci z zakresu 0-10, podanych przez u�ytkownika, 
wy�wietli jego s�own� reprezentacj� (np. �zero�), bez polskich znak�w. 
W przypadku warto�ci spoza zakresu, program ma wy�wietli� komunikat o b��dzie (�blad�).*/
#include <stdio.h>
#include <conio.h>

int main()
{
	int i;
	printf("Wprowadz liczbe z przedzialu 0 - 10\n");
	scanf("%d", &i);
	switch (i)
	{
	case 0: printf("zero");
		break;
	case 1: printf("jeden");
		break;
	case 2: printf("dwa");
		break;
	case 3: printf("trzy");
		break;
	case 4: printf("cztery");
		break;
	case 5: printf("piec");
		break;
	case 6: printf("szesc");
		break;
	case 7: printf("siedem");
		break;
	case 8: printf("osiem");
		break;
	case 9: printf("dziewiec");
		break;
	case 10: printf("dziesiec");
		break;

	default: printf("blad");

	}

	_getch();
	return 0;
}