/*
Napisz program, kt�ry pobierze od u�ytkownika liczby (nie wi�cej ni� 1000), 
a nast�pnie na jego podstawie wygeneruje ci�g wyj�ciowy wed�ug nast�puj�cego schematu: 
(zak�adaj�c �e ci�g wej�ciowy ma n element�w) 
pierwszy element ci�gu wyj�ciowego to r�nica ostatniego i pierwszego elementu ci�gu wej�ciowego, 
drugi to r�nica element�w n - 1 i 1, itd. W przypadku nieparzystej liczby element�w element �rodkowy powinien zosta� przepisany. 
Program ma wy�wietli� wszystkie elementy ci�gu wyj�ciowego oddzielone spacjami. 
Pojawienie si� warto�ci 0 na wej�ciu b�dzie oznacza�o zako�czenie ci�gu.
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
	
	for(int a=0;a<(i+1)/2;a++)
	{
		if(i%2==0)
		{
			printf("%i ", tab[i-1-a]-tab[a]);
		}	
		if(i%2==1&&a!=(((i+1)/2)-1))
		{
			printf("%i ", tab[i-1-a]-tab[a]);
		}
			if(a%2==1&&a==((i+1)/2)-1)
			{
				printf("%i ", tab[((i+1)/2)-1]);
			}
	}
	
	getchar();
	return 0;
}
