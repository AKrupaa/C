/*Napisz program, kt�ry na podstawie oceny podanej przez u�ytkownika (zmienna ca�kowita z zakresu 1 - 6) 
wy�wietli informacj� o promocji, 
b�d� jej braku do nast�pnej klasy. 
ocena 1 - Brak promocji do nast�pnej klasy 
oceny 2,3,4 i 5 - Promocja do nast�pnej klasy 
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
	case 2: printf("Promocja do nast�pnej klasy");
		break;
	case 3: printf("Promocja do nast�pnej klasy");
		break;
	case 4: printf("Promocja do nast�pnej klasy");
		break;
	case 5: printf("Promocja do nast�pnej klasy");
		break;
	case 6: printf("Promocja z ocena celujaca");
		break;

	default: printf("Wprowadzona ocena jest niepoprawna");

	}

	_getch();
	return 0;
}