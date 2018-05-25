/*Napisz program menu, który bêdzie pozwala³ na wykonanie poleceñ: 
suma, ró¿nica, iloczyn, iloraz, wprowadzanie danych, wyjœcie z programu.*/

#include <stdio.h>
#include <conio.h>
int main()
{
	int i = 100;
	while (i != 0)
	{
		printf("Program menu\nSuma - 1, Roznica - 2, Iloczyn - 3, Iloraz - 4\nWprowadz dane - 5\nWyjsc z programu - 0\n");
		scanf("%d", &i);
		switch (i)
		{
		case 1: printf("suma\n"); // pozwalana na wykonanie polecen sumy :)
			break;
		case 2: printf("ró¿nica\n"); // pozwalana na wykonanie polecen roznicy :)
			break;
		case 3: printf("iloczyn\n"); // pozwalana na wykonanie polecen iloczy :)
			break;
		case 4: printf("iloraz\n");	// pozwalana na wykonanie polecen iloraz :)
			break;
		case 5: printf("wprowadz dane: ");	// pozwalana na wykonanie polecen wprowadzania danych :)
			break;
		case 0: printf("wyjscie z programu");
			break;

		default: printf("Error\n");
		}
	}

	_getch();
	return 0;
}