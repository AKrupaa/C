/*Napisz prosty kalkulator do liczb zmiennoprzecinkowych. 
Program ma pobieraæ od u¿ytkownika dwie wartoœci liczbowe 
(z zakresu <32767;32767>), a nastêpnie wyœwietlaæ ich sumê, iloczyn, 
iloraz oraz ró¿nicê. Program powinien prosiæ o ka¿d¹ liczbê indywidualnie. 
Wyniki nale¿y wyœwietliæ w osobnych wierszach, 
w nastêpuj¹cej kolejnoœci: suma, ró¿nica, iloczyn oraz iloraz.*/

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
