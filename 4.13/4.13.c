#include <stdio.h>
/* Napisz program, który bedzie wyznaczal i wyswietlal róznice dwóch ostatnio wprowadzonych liczb rzeczywistych, az do momentu wprowadzenia przez uzytkownika liczby 0. 
Pomin pierwsza wprowadzona liczbe (jako ze brakuje jej poprzednika). */
int main()
{
	float a,b,wynik,temp;
	printf("Program wyznacza i wyswietla roznice dwoch ostatnio wprowadzonych liczb rzeczywistych,\naz do momentu wprowadzenia przez Ciebie liczby 0\n\n");
	
		printf("Wprowadz liczba a: "); scanf("%f",&a);
		printf("Wprowadz liczba b: "); scanf("%f",&b);
	do
	{
		//wynik=5-4
		wynik=a-b;
		printf("%f-%f=%f\n", a,b,wynik);
		// 5-4 = 1
		printf("Wprowadz kolejna liczbe: \n"); 
		// 6
		// wynik(1)=a wynik= 1-kolejna
		scanf("%f",&temp);
		a=wynik;
		b=temp;
		
		if(temp==0)
		{
			printf("Nastepuje wyjscie z programu!");
		}
		
	}
	while(temp!=0);
	
	
	return 0;
}
