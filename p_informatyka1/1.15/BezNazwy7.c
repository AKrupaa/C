/* Dane s¹ przyprostok¹tne trójk¹ta prostok¹tnego a i b. 
Oblicz d³ugoœæ przeciwprostok¹tnej c oraz k¹ty trójk¹ta w stopniach. 
Wykorzystaj odpowiednie funkcje trygonometryczne oraz funkcjê sqrt 
z pliku nag³ówkowego math.h. W kolejnych liniach wyœwietl d³ugoœæ 
przeciwprostok¹tnej oraz wartoœci k¹tów trójk¹ta w stopniach.
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
