/* 
Napisz grê w zgadywanie. 
Komputer losuje wartoœæ z zakresu 0-100 a nastêpnie pozwala graczowi odgadn¹æ jej wartoœæ w 10 krokach. 
Zgadywanie polega na wpisywaniu typowanej liczby, po czym komputer wyœwietla „za ma³o” lub „za du¿o”. 
Przekroczenie 10 kroków oznacza przegran¹.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    srand(time(0));
    int x=rand()%100;
	int szansa=0;
	int wybor;
	int i;
	
	printf("Gra zgadywanie!\nZgadnij wylosowana liczbe z zakresu 0-100.\nMasz 10 szans!\n");
	printf("%i\n",x);
	while(szansa!=10&&x!=wybor)
	{
		printf("\nPozostalo %i prob!\n",10-szansa);
		printf("Wprowadz liczbe: ");
		scanf("%i",&wybor);
		szansa++;
		if(wybor<x)
		{
			printf("Podpowiedz: za malo\n");
		}
		else printf("Podpowiedz: za duzo\n");
	}
	if(szansa==10)
	{
		printf("Przegrales, ha-ha!");
	}
	if(wybor==x)
	{
		printf("Wygrales, gratulacje!");
	}
	
	return 0;
}
