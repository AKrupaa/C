/*Wartoœci z zadania 4.6 wyœwietl tak, 
//Napisz program, który wyœwietla na ekranie dziesiêæ wartoœci liczby 10 podniesionej do potêgi. 
//Wartoœci wyk³adnika przyjmij od 0 do 9.
aby jednoœci by³y w tej samej kolumnie, 
np: 10 do potegi 0 = 1 10 do potegi 1 = 10 10 do potegi 2 = 100 10 do potegi 3 = 1000
Zakres wyk³adnika: 0 .. 15. Wybierz odpowiedni typ danych oraz symbol formatuj¹cy funkcji printf.*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	long long int wynik=10;
	int i,k;
	for(i=0;i<16;i++)
		{
			if(i==0)
			{
				printf("10^ 0=%16lli\n",i,wynik);	
			}
			else
			{
			printf("10^%2i=%16lli\n",i,wynik);	
				wynik=wynik*10;	
			}
		
		}
		

	_getch();
	return 0;
}
