/*Wy�wietl sum� warto�ci bezwzgl�dnych dziesi�ciu wprowadzonych liczb zmiennoprzecinkowych.*/

#include <stdio.h>

int main()
{
	int i;
	float wartosc;
	float suma=0;
		printf("Program oblicza sume wartosci bezwzglednych 10 liczb zmiennoprzecinkowych\n");
	
	for(i=0;i<10;i++)
	{
		printf("Wprowadz liczbe %i: ", i+1);
		scanf("%f",&wartosc);
		if(wartosc>=0)
		{
			suma=suma+wartosc;
		}
		else
		{
			suma=suma-wartosc;
		}
	}
	
	printf("Suma wartosci bezwzglednych= %f", suma);
	getchar();
	
	return 0;
}
