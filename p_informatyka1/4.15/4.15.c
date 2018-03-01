/*
Napisz program, który pobiera od u¿ytkownika dowoln¹ liczbê liczb zmiennoprzecinkowych 
(a¿ do momentu podania przez u¿ytkownika wartoœci -1, nie wliczanej do zbioru liczb). 
Dla podanych liczb znajdŸ wartoœæ maksymaln¹, minimaln¹ oraz œredni¹, a nastêpnie, w kolejnych wierszach, 
wyœwietl wartoœæ najmniejsz¹, najwiêksz¹ oraz wartoœæ œredni¹ (z dok³adnoœci¹ do dwóch miejsc po przecinku). 
W przypadku niemo¿liwoœci wyznaczenie którejkolwiek wartoœci program ma zwróciæ komunikat o b³êdzie.
*/

#include <stdio.h>

int main()
{
	float x; //liczba ktora wprowadza uzytkownik
	int licznik=0;
	float suma=0;
	float min,max;
	
	printf("Program pobiera liczby zmiennoprzecinkowe do momentu wpisania -1.\nProgram obliczy wartosc maksymalna, minimalna oraz srednia tych liczb!\n");
	printf("Wprowadz 1 liczbe zmiennoprzecinkowa: \n");
	scanf("%f",&x);
	min=x;
	max=x;
	suma=suma+x;
	licznik++;
	
		do
		{
			
			printf("Wprowadz %d liczbe: \n",licznik+1);
			scanf("%f",&x);
			
			if(x!=-1)
			{
			suma=suma+x;
			if(min>x) min=x;
			if(max<x) max=x;
			licznik++;
			
			}
			else
			{
				printf("\nWprowadzono liczbe -1\n\n");
			}

		}
		while(x!=-1);

	
	if(licznik>1)
	printf("MIN= %f\nMAX= %f\nSrednia= %.2f", min,max,suma/licznik);
	
	return 0;
}
