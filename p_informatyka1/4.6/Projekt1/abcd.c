#include <stdio.h>
#include <conio.h>
#include <math.h>
//Napisz program, kt�ry wy�wietla na ekranie dziesi�� warto�ci liczby 10 podniesionej do pot�gi. 
//Warto�ci wyk�adnika przyjmij od 0 do 9.
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
