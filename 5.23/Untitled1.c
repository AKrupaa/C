/*
Napisz program, który pobierze od u¿ytkownika liczby (nie wiêcej ni¿ 1000), a nastêpnie znajdzie najd³u¿szy podci¹g niemonotoniczny. 
Program ma wyœwietliæ, w osobnych liniach: 
liczbê elementów nale¿¹cych do najd³u¿szego podci¹gu, liczbê znalezionych takich podci¹gów, 
nastêpnie dla ka¿dego znalezionego podci¹gu indeks pierwszego elementu i po spacji wartoœci wszystkich elementów do niego nale¿¹cych. 
Pojawienie siê wartoœci 0 na wejœciu bêdzie oznacza³o zakoñczenie ci¹gu. 
PodpowiedŸ: minimalna d³ugoœæ ci¹gu, przy jakiej mo¿na stwierdziæ niemonotonicznoœæ, to 3 elementy.
*/

#include <stdio.h>

int main()
{
	const int max=1000;
	int tab[max];
	int liczba;
	int i=0;
	scanf("%i", &liczba);
	if(liczba!=0)
		tab[i++]=liczba;
	else
	{
		printf("Wprowadziles 0 (zero) na samym poczatku -> brak danych\n Nastepuje wyjscie z programu.");
		return 0;
	} 
	while(liczba!=0&&i<max)
	{
		scanf("%i",&liczba);
		if(liczba!=0)
		tab[i++]=liczba;
	}
	
	//znajdz podciag niemonotoniczny czyli  1 0 1 0 1 0 3 -1 0 1 2 3
									// 1-0-1=0 0-1-0<0 1-0-1=0 0-3--1<0 3--1-0>0
	//-1  0 1 czyli 0>-1 i 0<1 				1 0 4 -8 14 -1 100 -200 
										//  1 0 a<a+1 a>a+1
	int start=0;
	int stop=0;
	int temp=0;
	int licznik=0;
	for(int a=0;a<i;a++)
	{
			if(a+1 - a> 0&&a+1 - a < 0)
			{
				licznik++;
			}
			else
			{
				if(licznik>temp)
				{
					temp=licznik;
					start=a+2-licznik;
					stop=a+2;
				}
				licznik=0;
			}
		}
	
	printf("Najdluzszy ciag niemonotoniczny zaczyna sie w %i\n", start);
	printf("Koncowy indeks %i\n", stop);
	printf("Elementy tego ciagu to: ");
	for(start;start<=stop;start++) printf("%i ", tab[start]);
	
	getchar();
	return 0;
}
