/*
Napisz program, kt�ry pobierze od u�ytkownika liczby (nie wi�cej ni� 1000), 
a nast�pnie zastosuje na nim filtr u�redniaj�cy 
(ka�dy element ci�gu wyj�ciowego ma by� �redni� dw�ch s�siaduj�cych element�w ci�gu wej�ciowego). 
Program ma wy�wietli� wszystkie elementy ci�gu wyj�ciowego oddzielone spacjami. 
Pojawienie si� warto�ci 0 na wej�ciu b�dzie oznacza�o zako�czenie ci�gu
*/

#include <stdio.h>

int main()
{
	int i=0;
	const int max=1000;
	int tab[1000];
	int liczba;
	printf("Wprowadz liczby oddzielajac ja spacja: \n");
	scanf("%i",&liczba);
	if(liczba==0)
	{
		printf("Wprowadziles 0 (zero). Nastepuje wyjscie z programu!"); return 0;
	}
	else tab[i++]=liczba;

	while(i<max&&liczba!=0)
	{
		scanf("%i", &liczba);
		if(liczba!=0)
		tab[i++]=liczba;
	}

	for(int b=0;b<i;b++)
	{
		if(b==0)
		{
			printf("%f ", (tab[b]+tab[b+1])/(float)2);
		}	
		if(b==i-1)
		{
			printf("%f", ((tab[b-1]+tab[b])/(float)2));
		}
		if(b>1&&b<i-1)
		{
			printf("%f ", ((tab[b-1]+tab[b]+tab[b+1])/(float)3));
		}
	}
	getchar();
	return 0;
}
