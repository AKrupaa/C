#include <stdio.h>
//Napisz program, który pobiera od uzytkownika 100 liczb zmiennoprzecinkowych. 
//Dla podanych liczb znajdz wartosc maksymalna, minimalna oraz srednia, a nastepnie,
//w kolejnych wierszach, wyswietl wartosc najmniejsza, najwieksza oraz wartosc srednia (z dokladnoscia do dwóch miejsc po przecinku).
int main()
{
	float max,min,a;
	float suma;
	int i;
	
		printf("Wprowadz liczbe 1: ");
		scanf("%f",&a);
		min=a;
		max=a;
		suma=a;
		
	for(i=1;i<100;i++)
	{
		printf("Wprowadz liczbe %d: ", i+1);
		scanf("%f",&a);
		if(min>a) min=a;
		if(max<a) max=a;
		suma=suma+a;
	}
	
	printf("Wartosc najmniejsza= %f\nWartosc najwieksza= %f\nSrednia= %.2f", min,max,suma/100);
	return 0;
}
