#include <stdio.h>
#include <conio.h>
//Napisz program, który wyœwietla na ekranie liczby od 0 do 1000. Liczby nale¿y rozdzieliæ spacj¹.
int main()
{
	for (int i = 1; i < 101; i++)
	{
		printf("%d ", i);
	}

	_getch();
	return 0;
}