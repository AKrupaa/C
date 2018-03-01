//Napisz program pobierajacy od uzytkownika 10 wartosci calkowitych i zapisujacy je do tablicy. Nastepnie wyswietl wszystkie wartosci z tablicy na ekranie, uzupelnione o informacje, czy dana liczba jest liczba pierwsza.
#include <stdio.h>

int main()
{
	printf("Program pobiera 10 wartosci calkowitych, a nastepnie sprawdza czy jest to liczba pierwsza.\n");
	int liczba;
	int tab[10];
	//pobiera wartosci
	for(int i=0;i<10;i++)
	{
		printf("Wprowadz %i. liczbe: ", i+1);
		scanf("%i",&liczba);
		tab[i]=liczba;
	}
	
	//wypisz wartosci
	for(int k=0;k<10;k++)
	{
		printf("\nLiczba nr %i to %i ",k+1,tab[k]);
		
		//czy liczba tab[k] to liczba pierwsza?
		int ile=0;
		for(int l=1;l<=tab[k];l++)
		{
			if(tab[k]%l==0)
			{
				ile++;
			}
		
		}
			if(ile==2)
			{
				printf("i jest to liczba pierwsza");
			}
	}
	
		
	
	getchar();
	return 0;

}
