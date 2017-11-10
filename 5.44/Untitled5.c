/*
Zadeklaruj tablicê i umieœæ w niej wartoœci ca³kowite od 65 do 90. 
Wyœwietl te wartoœci na ekranie jako liczby (%d), jako znaki (%c) oraz ponownie jako znaki, 
przy czym zmniejsz ka¿d¹ wyœwietlan¹ wartoœæ o 32. 
Wyjaœnij zaobserwowany efekt. Porównaj wynik swojego programu z tabel¹ znaków ASCII
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
	
	
	//Wyjaœnij zaobserwowany efekt.
	//Proste - 32 miejsca wczesniej od 75 (litera K) znajduje sie 43 (znak dodawania), analogicznie dla pozostalych
	getchar();
	return 0;
}
