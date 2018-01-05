/*
Napisz program, kt�ry obliczy i wy�wietli sum� warto�ci bezwzgl�dnych dziesi�ciu wprowadzonych przez u�ytkownika liczb zmiennoprzecinkowych 
z dok�adno�ci� do dw�ch miejsc po przecinku. Liczby b�d� wprowadzane po spacji.
*/

#include <stdio.h>

int main()
{
	printf("Program oblicza sume wartosci bezwzglednych dziesieciu wprowadzonych (reszte ignoruje) liczb zmiennoprzecinkowych.\n");
	printf("Wprowadz liczby po spacji: ");
	float suma=0;
	float temp;
	int licznik=0;
	while(getchar()!='\n'&&licznik<10)
	{
		scanf("%f",&temp);
		if(temp<0)
		{
			suma-=temp;
			licznik++;
		}
		else
		{
			suma+=temp;
			licznik++;
		} 
		
	}
	
	printf("Suma liczb wynosi: %.2f", suma);
	getchar();
	return 0;
}
