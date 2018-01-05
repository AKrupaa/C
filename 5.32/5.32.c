/*
Napisz program, który pobierze od uzytkownika dwa ciagi liczb (nie wiecej niz 100 elementów w kazdym). 
Pojawienie sie wartosci 0 na wejsciu bedzie oznaczalo zakonczenie ciagu. 
Program ma obliczyc i wyswietlic po spacjach ciag bedacy iloczynem poszczególnych elementów dwóch wprowadzonych ciagów, 
przy czym iloczyn ma byc liczony na krzyz - pierwszy element pierwszego ciagu ciagu z ostatnim drugiego, drugi element pierwszego ciagu z przedostatnim drugiego itd. 
Jezeli ciagi wejsciowe beda mialy rózna dlugosc, to dlugosc ciagu wyjsciowego ma byc taka jak krótszego z wprowadzonych ciagów.
*/
#include <stdio.h>

int main()
{
	int i=0;
	int o=0;
	const int max=100;
	int tab1[100];
	int tab2[100];
	int liczba;
	printf("Wprowadz pierwszy ciag liczbowy (max %i) liczb po spacji: \n", max);
	scanf("%i",&liczba);
	if(liczba!=0)
	{
		tab1[i++]=liczba;
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
			tab1[i++]=liczba;	
		}	
	}
	
	// --------------------------------------------------------------------------
	
	printf("Wprowadz durgi ciag liczbowy (max %i) liczb po spacji: \n", max);
	scanf("%i",&liczba);
	if(liczba!=0)
	{
		tab2[o++]=liczba;
	}
	else
	{
		printf("Wprowadzono 0 na poczatku. Nastepuje wyjscie z programu!"); return 0;
	}
	
	while(liczba!=0&&o<max)
	{
		scanf("%i", &liczba);
		if(liczba!=0)
		{
			tab2[o++]=liczba;	
		}	
	}
	

	int r;
	if(i>o) r=o;
	else r=i;
	
	//pierwszy*ostatni, drugi*przedostatni
	
	for(int q=0;q<r;q++)
	{
		printf("%i\n",tab1[q]*tab2[r-q-1]);
	}
	
	getchar();
	return 0;
}
