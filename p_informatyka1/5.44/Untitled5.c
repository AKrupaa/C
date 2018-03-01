/*
Zadeklaruj tablic� i umie�� w niej warto�ci ca�kowite od 65 do 90. 
Wy�wietl te warto�ci na ekranie jako liczby (%d), jako znaki (%c) oraz ponownie jako znaki, 
przy czym zmniejsz ka�d� wy�wietlan� warto�� o 32. 
Wyja�nij zaobserwowany efekt. Por�wnaj wynik swojego programu z tabel� znak�w ASCII
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int tab[10];
	srand(time(NULL));
	for(int i=0;i<10;i++)
	{
		tab[i]=65+rand()%26;
	}
	
	for(int i=0;i<10;i++)
		printf("%d ", tab[i]);
		
		printf("\n\n");
		
	for(int i=0;i<10;i++)
		printf("%2c ", tab[i]);
		
			printf("\n\n");
		
	for(int i=0;i<10;i++)
		printf("%2c ", tab[i]-32);
	
	
	//Wyja�nij zaobserwowany efekt.
	//Proste - 32 miejsca wczesniej od 75 (litera K) znajduje sie 43 (znak dodawania), analogicznie dla pozostalych
	getchar();
	return 0;
}
