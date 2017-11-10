/*
Napisz program, kt�ry pobierze od u�ytkownika liczby (nie wi�cej ni� 1000), a nast�pnie znajdzie najd�u�szy podci�g rosn�cy. 
Program ma wy�wietli� w osobnych liniach liczb� element�w nale��cych do najd�u�szego podci�gu, liczb� znalezionych takich podci�g�w, 
nast�pnie dla ka�dego znalezionego podci�gu indeks pierwszego elementu i po spacji warto�ci wszystkich element�w do niego nale��cych. 
Pojawienie si� warto�ci 0 na wej�ciu b�dzie oznacza�o zako�czenie ci�gu.
*/

#include <stdio.h>

int main()
{
	const int max=1000;
	int tab[max];
	int i=0;
	int liczba;
	printf("Program konczy wczytywanie danych gdy napotka 0 (zero)\n");
	printf("Program wyznacza najdluzszy podciag rosnacy. W osobnych liniach wypisuje:\n");
	printf("liczbe elemntow nalezacych do najdluzszego podciagu,\n");
	printf("liczbe znalezionych takich podciagow nastepnie dla kazdego znalezionego podciagu indeks pierwszego elementu\n");
	printf("i po spacji wartosci wszystkich elemntow do niego nalezacych\n");
    printf("Podaj liczby oddzielone spacjami (max %d): ", max);
    
	scanf("%i", &liczba);
	if(liczba!=0) tab[i++]=liczba;
	else
	{
		printf("Wprowadziles 0, nastepuje wyjscie z programu"); return 0;
	}
	while(liczba!=0&&i<max)
	{
		scanf("%i",&liczba);
		if(liczba!=0)
		tab[i++]=liczba;
	}
	
/*	int q = 0;
	while(q<i)
	{
		do
		{
			printf("%d ", tab[q]);
			fflush(stdin);
			q++;
		}	
		while(tab[q-1]<tab[q]);
		printf("\n");
	}	
	printf("\n"); */
	
	int temp=0;
	int licznik=0;
	int stop=0;
	int start=0;
	for(int p=0;p<i;p++)
	{
		if(tab[p]<tab[p+1])
		{
			licznik++;
		}
		else
		{
			if(licznik>temp)
			{
			temp=licznik;
			start=p-licznik;
			stop=p;
			}
			licznik=0;		
		}
	}
	
	printf("Najdluzszy podciag rosnacy zaczyna sie w %i\n", start);
	printf("Koncowy indeks %i\n", stop);
	printf("Elementy tego ciagu to: ");
	for(start;start<=stop;start++) printf("%i ", tab[start]);
	
	getchar();
	return 0;
}
