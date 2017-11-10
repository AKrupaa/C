#include <stdio.h>
//Napisz prosty kalkulator do liczb ca³kowitych. 
/*Program ma pobieraæ od u¿ytkownika dwie wartoœci liczbowe (z zakresu <32767;32767>),
a nastêpnie wyœwietlaæ ich sumê, iloczyn, 
iloraz oraz ró¿nicê. Program powinien prosiæ o ka¿d¹ liczbê indywidualnie. 
Wyniki nale¿y wyœwietliæ w osobnych wierszach, 
w nastêpuj¹cej kolejnoœci: suma, ró¿nica, iloczyn oraz iloraz.*/

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
