/*
Napisz dwie funkcje, zamieniaj¹ce k¹t w stopniach na k¹t w radianach oraz k¹t w radianach na k¹t w stopniach. 
Wybierz typ parametrów swoich funkcji, jak i typ wartoœci zwracanej. 
Uzasadnij swój wybór w komentarzu do przes³anego rozwi¹zania.

Napisz program, który pozwoli u¿ytkownikowi dokonaæ konwersji jednej miary na drug¹. 
Program powinien wyœwietliæ pytanie o kierunek konwersji (1=na radiany, 2=na stopnie), 
a nastêpnie pozwoliæ u¿ytkownikowi wprowadziæ wartoœæ do przekonwertowania. 
Wartoœci maj¹ byæ wyœwietlone z dok³adnoœci¹ dwóch miejsc po przecinku. 
W przypadku wprowadzenia przez u¿ytkownika nieprawid³owych danych program ma wyœwietliæ komunikat „Error”.
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
