/*Napisz program, który pobiera od u¿ytkownika wartoœæ ca³kowit¹ i sprawdza 
czy jest ona dodatnia, ujemna lub zerowa. W zale¿noœci od wyniku testu, 
na ekranie nale¿y wyœwietliæ odpowiedni komunikat (dodatnia, ujemna, zerowa).*/

#include <stdio.h>
#include <conio.h>
int main()
{
	int a;
	printf("Wprowadz liczbe calkowita: ");
	scanf("%d", &a);
	if (a > 0)
	{
		printf("dodatnia");
	}
	else if (a == 0)
		{
		printf("zerowa");
		}
		else
		{
			printf("ujemna");
		}
	_getch();
	return 0;

}