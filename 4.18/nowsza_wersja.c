/*
Napisz program, który obliczy i wyœwietli sumê wartoœci bezwzglêdnych dziesiêciu wprowadzonych przez u¿ytkownika liczb zmiennoprzecinkowych 
z dok³adnoœci¹ do dwóch miejsc po przecinku. Liczby bêd¹ wprowadzane po spacji.
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
