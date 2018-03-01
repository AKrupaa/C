/*Napisz program, który na podstawie oceny podanej przez u¿ytkownika (zmienna ca³kowita z zakresu 1 - 6) 
wyœwietli informacjê o promocji, 
b¹dŸ jej braku do nastêpnej klasy. 
ocena 1 - Brak promocji do nastêpnej klasy 
oceny 2,3,4 i 5 - Promocja do nastêpnej klasy 
ocena 6 - Promocja z ocena celujaca 
W przypadku podania oceny spoza zakresu program powinien wyswietlic informacje: 
Wprowadzona ocena jest niepoprawna.*/


#include <stdio.h>
#include <conio.h>

int main()
{
	int i;
	printf("Wprowadz liczbe z przedzialu 1 - 6\n");
	scanf("%d", &i);
	switch (i)
	{
	case 1: printf("Brak promocji");
		break;
	case 2: printf("Promocja do nastêpnej klasy");
		break;
	case 3: printf("Promocja do nastêpnej klasy");
		break;
	case 4: printf("Promocja do nastêpnej klasy");
		break;
	case 5: printf("Promocja do nastêpnej klasy");
		break;
	case 6: printf("Promocja z ocena celujaca");
		break;

	default: printf("Wprowadzona ocena jest niepoprawna");

	}

	_getch();
	return 0;
}