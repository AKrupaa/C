/*
Napisz program, kt�ry pobierze od u�ytkownika liczby (nie wi�cej ni� 1000), 
a nast�pnie wypisze wszystkie elementy ci�gu znajduj�ce si� na pozycjach parzystych pocz�wszy od ko�ca ci�gu. 
Pojawienie si� warto�ci 0 na wej�ciu b�dzie oznacza�o zako�czenie ci�gu.
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
