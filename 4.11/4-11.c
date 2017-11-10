#include <stdio.h>
#include <math.h>
//Napisz program, który wyznacza obwód i powierzchnie kola o promieniu podanym przez uzytkownika. 
//Uzytkownik moze podac wartosc niecalkowita. W przypadku, gdy uzytkownik poda wartosc ujemna, nalezy wyswietlic komunikat o bledzie i ponowic pytanie o promien.
int main()
{
	float r;
	do
	{
	printf("Program oblicza obwod i powierzchnie kola.\nPodaj promien:");
	scanf("%f",&r);


		if(r>=0)
		{
			printf("Obwod kola= %f\n", 2*M_PI*r);
			printf("Pole kola= %f\n", M_PI*r*r);
		}
		else
		{
			printf("Wprowadz r >= 0!\n");
		}
	}
	while(r<0);

	
	return 0;
}
