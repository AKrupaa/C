#include <stdio.h>
//Napisz prosty kalkulator do liczb ca�kowitych. 
/*Program ma pobiera� od u�ytkownika dwie warto�ci liczbowe (z zakresu <32767;32767>),
a nast�pnie wy�wietla� ich sum�, iloczyn, 
iloraz oraz r�nic�. Program powinien prosi� o ka�d� liczb� indywidualnie. 
Wyniki nale�y wy�wietli� w osobnych wierszach, 
w nast�puj�cej kolejno�ci: suma, r�nica, iloczyn oraz iloraz.*/

int main()
{
	int a;
	int b;
	printf("Prosty kalkulator dla liczb calkowitych\nWprowadz liczbe A: ");
	scanf("%d", &a);
	printf("\nWprowadz liczbe B: ");
	scanf("%d", &b);
	printf("a+b= %d\n", a+b);
	printf("a-b= %d\n", a-b);
	printf("b-a= %d\n", b-a);
	printf("a*b= %d\n", a*b);
	float fa=a;
	float fb=b;
	printf("a/b= %f\n", fa/fb);
	printf("b/a= %f\n Nastepuje wyjscie z programu!", fb/fa);
	
	return 0;
}
