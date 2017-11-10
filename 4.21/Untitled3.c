//Napisz program wyœwietlaj¹cy liczby ca³kowite z przedzia³u <a;b>. Granice przedzia³u podawane z klawiatury.
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
