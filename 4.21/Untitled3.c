//Napisz program wy�wietlaj�cy liczby ca�kowite z przedzia�u <a;b>. Granice przedzia�u podawane z klawiatury.
#include <stdio.h>

int main()
{
	int a,b;
	printf("Program wyswietla wszystkie liczby z zadanego przedzialu <a;b>\nWprowadz a: ");
	scanf("%i",&a);
	printf("Wprowadz b: ");
	scanf("%i",&b);
	for(a;a<=b;a++)
	{
		printf("%i ",a);
	}
	getchar();
	return 0;
}
