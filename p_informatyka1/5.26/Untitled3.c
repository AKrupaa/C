/* 
Napisz program, kt�ry pobierze od u�ytkownika liczby (nie wi�cej ni� 1000), 
pojawienie si� warto�ci 0 na wej�ciu b�dzie oznacza�o zako�czenie ci�gu. 
Po zako�czeniu wprowadzania ci�gu zostanie podana dodatkowa liczba. Program ma wy�wietli� w osobnych liniach dwie warto�ci:
- liczb� element�w ci�gu, kt�re s� mniejsze od podanej na ko�cu warto�ci, 
- liczb� element�w ci�gu, kt�re s� wi�ksze od podanej na ko�cu warto�ci.
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
	
	printf("Wprowadz dodatkowa liczbe: ");
	scanf("%i",&liczba);

	//for(int q=0;q<i;q++) printf("%i ", tab[q]);
	//printf("Dodatkowa liczba wynosi %i", liczba);
	//printf("\n\n\n"); 
	int suma=0;
	int suma1=0;
	for(int a=0;a<i;a++)
	{
		if(tab[a]<liczba)
		{
			suma+=1;
		}
		if(tab[a]>liczba)
		{
			suma1+=1;
		}
	}
	printf("Liczba elemntow liczb mniejszych niz %i wynosi: %i\n",liczba,suma);
	printf("Liczba elemntow liczb wiekszych niz %i wynosi: %i",liczba,suma1);
	getchar();
	return 0;
}
