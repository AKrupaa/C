/*Napisz program, pobieraj�cy od u�ytkownika 10 liczb ca�kowitych, 
a nast�pnie wyznaczaj�cy i wy�wietlaj�cy �redni� arytmetyczn� z pobranych liczb. 
Nie u�ywaj p�tli. 
�redni� wy�wietl z dok�adno�ci� do 4 miejsc po przecinku.*/

#include <stdio.h>

int main()
{
	float a,b,c,d,e,f,g,h,i,j;
	printf("Program liczacy srednia arytmetyczna dziesieciu kolejnych liczb.\n");
	printf("Podaj liczbe pierwsza: ");
	scanf("%f",&a);
	printf("\nPodaj liczbe druga: ");
	scanf("%f",&b);
	printf("\nPodaj liczbe trzecia: ");
	scanf("%f",&c);
	printf("\nPodaj liczbe czwarta: ");
	scanf("%f",&d);
	printf("\nPodaj liczbe piata: ");
	scanf("%f",&e);
	printf("\nPodaj liczbe szosta: ");
	scanf("%f",&f);
	printf("\nPodaj liczbe siodma: ");
	scanf("%f",&g);
	printf("\nPodaj liczbe osma: ");
	scanf("%f",&h);
	printf("\nPodaj liczbe dziewiata: ");
	scanf("%f",&i);
	printf("\nPodaj liczbe dziesiata: ");
	scanf("%f",&j);
	printf("Srednia arytmetyczna tych liczb jest rowna: %.4f", ((a+b+c+d+e+f+g+h+i+j)/10.0000));
	//float k=((1+2+3+4+5+6+7+8+9+10)/10.0000); musi byc .0000 aby zadzialo poprawnie
	//printf("srednia rowna jest= %.3f", k);
	return 0;
}

