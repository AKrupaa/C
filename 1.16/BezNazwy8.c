#include <stdio.h>
/* Napisz program, który dla podanej przez u¿ytkownika temperatury w stopniach Celsjusza, 
wyœwietli w osobnych wierszach temperaturê w stopniach Kelwina i Fahrenheita. */
int main()
{
	printf("Podaj wartosc temperatury w stopniach Celsjusza: ");
	float stopnieC,stopnieF,stopnieK;
	scanf("%f",&stopnieC);
	stopnieF = (stopnieC*9/5)+32;
	stopnieK = stopnieC+273.15;
	printf("Stopnie Fahrenheita= %f\nStopnie Kelvina= %f",stopnieF,stopnieK);
	return 0;
}
