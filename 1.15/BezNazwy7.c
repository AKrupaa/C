/* Dane s� przyprostok�tne tr�jk�ta prostok�tnego a i b. 
Oblicz d�ugo�� przeciwprostok�tnej c oraz k�ty tr�jk�ta w stopniach. 
Wykorzystaj odpowiednie funkcje trygonometryczne oraz funkcj� sqrt 
z pliku nag��wkowego math.h. W kolejnych liniach wy�wietl d�ugo�� 
przeciwprostok�tnej oraz warto�ci k�t�w tr�jk�ta w stopniach.
a<b+c
b<a+c
c<b+a     */
#include <stdio.h>
#include <math.h>

int main()
{
	float a,b,c;
	printf("Program liczy wartosc przeciwprostokatnej trojkata prostokatnego\n");
	printf("Dodatkowo wypisuje wartosci katow dla zdanych dlugosci bokow przyprostokatnych\n");
	printf("Wprowadz wartosc przyprostokatnej\n a= ");
	scanf("%f",&a);
	printf("Wprowadz wartosc przyprostokatnej\n b= ");
	scanf("%f",&b);
	c=sqrt((a*a)+(b*b));
//	printf("%f",c);
	if(c<a+b||b<a+c||a<b+c)
	{
	//	printf("%f",c);
		float alfa=atan(a/b)*(180/M_PI);
	//	printf("\n%f",alfa);
		
		printf("Przeciwprostokatna wynosi: %f\nJeden kat ostry wynosi: %f\nDrugi z nich wynosi: %f\nOstatni z nich jest katem prostym(90)", c, alfa, 90-alfa);
	}
	else
	{
		printf("to nie jest trojkat");
	}

	
	return 0;
}
