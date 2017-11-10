//Napisz program wyœwietlaj¹cy liczby z przedzia³u <a,b> z krokiem 0.25.

#include <stdio.h>

int main()
{
	int b;
	float a;
	printf("Program wyswietla wszystkie liczby z zadanego przedzialu <a;b> z krokiem 0.25\nWprowadz a: ");
	scanf("%f",&a);
	printf("Wprowadz b: ");
	scanf("%i",&b);
	for(a;a<=b;a=a+0.25)
	{
		printf("%.2f ",a);
	}
	getchar();
	
	return 0;
}
