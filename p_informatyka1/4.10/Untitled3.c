/* Napisz program, który wyznacza sumê 10 liczb rzeczywistych, podanych przez u¿ytkownika.	*/

#include <stdio.h>

int main()
{
	float liczba;
	int i,k;
	float suma=0;

	printf("Wprowadz kolejno 10 liczb rzeczywistych -> program wypisze sume tych liczb\n");

	for(i=0;i<10;i++)
	{
		scanf("%f",&liczba);
		suma=suma+liczba;
	}
	
	printf("Suma = %f",suma);
	getchar();
	return 0;
}
