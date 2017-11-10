#include <stdio.h>
//Napisz program, który pobiera od uzytkownika 100 liczb zmiennoprzecinkowych. 
//Dla podanych liczb znajdz wartosc maksymalna, minimalna oraz srednia, a nastepnie,
//w kolejnych wierszach, wyswietl wartosc najmniejsza, najwieksza oraz wartosc srednia (z dokladnoscia do dwóch miejsc po przecinku).
int main()
{
	float a,max,min,sr;
	int i;
	for(i=0;i<100;i++)
	{
		printf("Wprowadz liczbe%f: ", i+1);
		scanf("%f",&a);
	}
	return 0;
}
