/*
Napisz dwie funkcje, zamieniaj�ce k�t w stopniach na k�t w radianach oraz k�t w radianach na k�t w stopniach. 
Wybierz typ parametr�w swoich funkcji, jak i typ warto�ci zwracanej. 
Uzasadnij sw�j wyb�r w komentarzu do przes�anego rozwi�zania.

Napisz program, kt�ry pozwoli u�ytkownikowi dokona� konwersji jednej miary na drug�. 
Program powinien wy�wietli� pytanie o kierunek konwersji (1=na radiany, 2=na stopnie), 
a nast�pnie pozwoli� u�ytkownikowi wprowadzi� warto�� do przekonwertowania. 
Warto�ci maj� by� wy�wietlone z dok�adno�ci� dw�ch miejsc po przecinku. 
W przypadku wprowadzenia przez u�ytkownika nieprawid�owych danych program ma wy�wietli� komunikat �Error�.
*/

#include <stdio.h>
#include <ctype.h>
#define M_PI 3.141592

//float, bo i tak bedziemy wyswietlac z dokladnoscia do dwoch miejsc po przecinku
float s_r(float s)
{
	return (s*M_PI/180);
}

float r_s(float r)
{
	return (r*180/M_PI);
}

int main()
{
	//1=na radiany, 2=na stopnie
	int x;
	float miara;

		printf("Wybierz rodzaj konwersji (1=stopnie na radiany, 2=radiany na stopnie):");
		scanf("%i",&x);
		switch(x)
		{
			case 1:
				{
					printf("Podaj miare kata: ");
					if(scanf("%f",&miara))
					printf("Wynik: %.2f",s_r(miara));
					else
					printf("Error");
				}
				break;
			case 2:
				{
					printf("Podaj miare kata: ");
					
					if(scanf("%f",&miara))
					printf("Wynik: %.2f",r_s(miara));
					else
					printf("Error");
				}
				break;
			default:
				{
					printf("Error");
				}
		}
	
	return 0;
}
