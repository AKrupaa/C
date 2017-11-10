/*
Napisz program, który pobierze od u¿ytkownika liczby (nie wiêcej ni¿ 1000), 
a nastêpnie wypisze wszystkie elementy ci¹gu znajduj¹ce siê na pozycjach parzystych pocz¹wszy od koñca ci¹gu. 
Pojawienie siê wartoœci 0 na wejœciu bêdzie oznacza³o zakoñczenie ci¹gu.
*/


#include <stdio.h>

int main()
{
	int i=0;
	const int max= 1000;
	int tab[max];
	int liczba;
	printf("Wprowadz (max %i) liczb po spacji: \n",max);
	scanf("%i",&liczba);
	if(liczba!=0)
	{
		tab[i++]=liczba;
	}
	else
	{
		printf("Wprowadzono 0 na poczatku. Nastepuje wyjscie z programu!"); return 0;
	}
	
	while(liczba!=0&&i<max)
	{
		scanf("%i", &liczba);
		if(liczba!=0)
		{
			tab[i++]=liczba;	
		}	
	}
//	printf("i=%i\n", i);
	i--;
	for(i;i>=0;i--)
	{
	//	printf("i=%i\n", i);
		if(i%2==0)
		{
			printf("%i ", tab[i]);
		}
	}
	getchar();
	return 0;	
}
