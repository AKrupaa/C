/*Napisz prosty kalkulator do liczb zmiennoprzecinkowych. 
Program ma pobiera� od u�ytkownika dwie warto�ci liczbowe 
(z zakresu <32767;32767>), a nast�pnie wy�wietla� ich sum�, iloczyn, 
iloraz oraz r�nic�. Program powinien prosi� o ka�d� liczb� indywidualnie. 
Wyniki nale�y wy�wietli� w osobnych wierszach, 
w nast�puj�cej kolejno�ci: suma, r�nica, iloczyn oraz iloraz.*/

#include <stdio.h>

int main()
{
	float a;
	float b;
	printf("Prosty kalkulator dla liczb calkowitych\nWprowadz liczbe A: ");
	scanf("%f", &a);
	printf("\nWprowadz liczbe B: ");
	scanf("%f", &b);
	printf("a+b= %f\n", a+b);
	printf("a-b= %f\n", a-b);
	printf("b-a= %f\n", b-a);
	printf("a*b= %f\n", a*b);
	if(b!=0)
	{
		printf("a/b= %f\n Nastepuje wyjscie z programu!", a/b);	
	}
	else
	{
		printf("Nie wolno dzielic przez 0 -> Wyjscie z programu\n");
	}
	return 0;
}
