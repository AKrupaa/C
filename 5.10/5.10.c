#include <stdio.h>
/*Napisz program pobierajacy od uzytkownika 10 wartosci calkowitych i zapisujacy je do tablicy. Nastepnie wyswietl wszystkie wartosci z tablicy na ekranie, uzupelnione o informacje, czy dana liczba jest parzysta.*/
int main()
{
	printf("Program pobiera 10 wartosci calkowitych, a nastepnie sprawdza czy jest to liczba parzysta.\n");
	int liczba;
	int tab[10];
	for(int i=0;i<10;i++)
	{
		printf("Wprowadz %i. liczbe: ", i+1);
		scanf("%i",&liczba);
		tab[i]=liczba;
	}
	for(int k=0;k<10;k++)
	{
		printf("Liczba nr %i to %i",k+1,tab[k]);
		if(tab[k]%2==0) printf(" i jest to liczba parzysta\n");
		else printf("\n");
	}
	getchar();
	return 0;
}
