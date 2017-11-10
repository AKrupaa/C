/*Napisz prosty kalkulator dla liczb zespolonych. 
Program ma pobra� od u�ytkownika dwie liczby zespolone: 
(najpierw cz�� rzeczywist� nast�pnie urojon� liczby pierwszej, potem to samo dla drugiej). 
Po wprowadzeniu program ma wy�wietli� obie liczby zespolone w formacie (9999.999+ i9999.999) (z dok�adno�ci� do trzech miejsc po przecinku). 
Nast�pnie nale�y wy�wietli� sum�, iloczyn, iloraz oraz r�nic� obu liczb.*/
#include <stdio.h>

int main()
{
	float a1, a2, b1, b2, c1, c2;
	printf("Wprowadz czesc rzeczywista liczby a: ");
	scanf("%f", &a1);
	printf("\n Wprowadz czesc urojona liczby a: ");
	scanf("%f", &a2);
	
	printf("\n Wprowadz czesc rzeczywista liczby b: ");
	scanf("%f", &b1);
	printf("\n Wprowadz czesc urojana liczby b: ");
	scanf("%f", &b2);
	
	printf("\n %.3f + %.3f + i(%.3f + %.3f)= %.3f + i%.3f\n", a1,b1, a2,b2, a1+b1, a2+b2);
	printf(" %.3f - %.3f - i(%.3f - %.3f)= %.3f - i%.3f", a1,b1, a2,b2, a1-b1, a2-b2);
	// i^2 - -1
	//	c= ((a1 + a2)*(b1 +b2))= a1*b1 + a1*ib1 + ia2* b1 -a2*b2;
	// wynik= a1*b1 - a2*b2 -> czesc rzeczywista
	// wynik2= a1*ib1 + ia2*b2 -> czesc urojona
	c1= ((a1*b1) - (a2*b2));
	c2= ((a1*b1) + (a2*b2)); //dostaw litere i jako tekst ;)
	printf("\n (%.3f + i%.3f) * (%.3f + i%.3f) = %.3f + i%.3f", a1, a2, b1, b2, c1, c2);
	
	c1= ((a1*b1)+(a2*b2)) / ((b1*b1 )+ (b2*b2));
	c2= ((a2*b1)-(a1*b2)) / ((b1*b1) + (b2*b2));
	printf("\n (%.3f + i%.3f) / (%.3f + i%.3f) = %.3f + i%.3f", a1, a2, b1, b2, c1, c2);
	printf("\n\n i-liczba oznacza i*(-liczba)\n\n");
	// zgadza si�, uff.
	return 0;
}

