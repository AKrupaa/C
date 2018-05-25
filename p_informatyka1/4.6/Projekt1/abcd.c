#include <stdio.h>
#include <conio.h>
#include <math.h>
//Napisz program, który wyœwietla na ekranie dziesiêæ wartoœci liczby 10 podniesionej do potêgi. 
//Wartoœci wyk³adnika przyjmij od 0 do 9.
int main()
{
	int wynik=10;
	int i,k;
	
	for(i=0;i<9;i++)
		{
		
		printf("10^%d=%d\n",i+1,wynik);	
			wynik=wynik*10;
		}
		

	_getch();
	return 0;
}
