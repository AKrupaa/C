/*
Napisz program, który pobierze od u¿ytkownika ³añcuch tekstowy zawieraj¹cy wy³¹cznie cyfry 1..9 oraz znaki “|” i “-”. 
Program ma utworzyæ tablicê elementów typu long zawieraj¹c¹ sumy liczb pomiêdzy kolejnymi napisami „|” 
(je¿eli „|” jest pierwszym elementem tablicy lub mamy 2 elementy „|” po sobie, 
to odnoœna suma ma wynosiæ 0, cyfry sk³adaj¹ce siê na pojedyncz¹ liczbê s¹ oddzielone symbolami “-”). 
Program ma wypisaæ po spacjach elementy tablicy wynikowej.
*/
#include <stdio.h>
#include <string.h>


int main()
{
	const int max=1000;
	char tab[1000];
	int i=0;
	char znak;
	printf("Wprowadz tekst zawierajacy wylacznie liczby 1..9 oraz znaki | i -\n");
	printf("ENTER przerywa wczytywanie tekstu\n");
	scanf("%c", &znak);
	if((znak>=49 && znak<=57) || (znak==45 || znak==124)) //49-57 to liczby ; 45 to - ; 124 to | ;
	tab[i++]=znak;
	if(znak=='\n')
	printf("Wcisnieto na poczatku ENTER. Nastepuje wyjscie z programu");
	while(i<max&&znak!='\n')
	{
		scanf("%c", &znak);
		if((znak>=49 && znak<=57) || (znak==45 || znak==124))
		tab[i++]=znak;
	}	
	//wczytywanie /\
	
	printf("\n");
	
	for(int z=0;z<i;z++)
	printf("%c", tab[z]);
	
	printf("\n");
	
	int liczba1;
	int liczba2;
	//49-57 to liczby ; 45 to - ; 124 to | ;
	int w;
	int suma=0;
	
	for(int q=0;q<i&&tab[q]!='\x0';q++)
	{
		if(tab[q]==124&&tab[q+1]==124&&tab[q+1]!='\x0')
		{
			printf(" 0");
		}
	/*	if(tab[q]==124&&tab[q+1]>=49&&tab[q+1]<=57&&tab[q+2]==124&&tab[q+2]!='\x0')
		{
			printf(" %i", tab[q+1]-48);
		}
		tutaj dziala algorytm nizej :)
	*/
		if(tab[q]>=49&&tab[q]<=57)
		{
			suma=tab[q]-48;
				for(int w=q;tab[w]!=124&&tab[w]!='\x0';w++)
				{
					if(tab[w]==45&&tab[w+1]>=49&&tab[w+1]<=57)
					{
						liczba1=tab[w+1]-48;
						suma=suma+liczba1;
					}
					q=w;
				}
				printf(" %i",suma);
				suma=0;
		}
		
	}	
	
	
	
	return 0;	
}
