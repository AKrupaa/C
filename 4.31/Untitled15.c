//Napisz program do sumowania n liczb rzeczywistych. Wartoœæ n ma byæ podawana przez u¿ytkownika.
#include <stdio.h>

int main()
{
	int i;
	float n;
	float liczba;
	float suma=0;
	printf("Program sumuje n wprowadzonych liczb rzeczywistych.\nWprowadz n: ");
	scanf("%f",&n);
	for(i=0;i<(int)n;i++)
	{
		printf("\nWprowadz %i. liczbe: ", i+1);
		scanf("%f",&liczba);
		suma=suma+liczba;
	}
	
	printf("\nSuma= %f",suma);
	
	return 0;
}
