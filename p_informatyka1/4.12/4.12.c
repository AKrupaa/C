#include <stdio.h>
/* Napisz program, który wyznacza silnie dla dowolnej liczby naturalnej n, mniejszej od 21, wpisywanej z klawiatury. 
Zastosuj metode iteracyjna, dana wzorem n! = 1*2*…*n. W przypadku podania przez uzytkownika nieprawidlowych danych program ma wyswietlic komunikat o bledzie i zwrócic wartosc 1. */

int main()
{
	int n,i;
	long long int wynik=1;
	printf("Program liczy silnie liczby n dla dowolnej liczby naturalnej\nLiczba n ma byc mniejsza od 21!\nWprowadz liczbe n: ");
	scanf("%d",&n);
	if(n<21)
	{
		//20!= 1*2*3*4*5*6*7*9*9*10*11*12*13*14*15*16*17*18*19*20;
		//	n!=1*2*3*...*n;
		//wynik=n*(n-1)*(n-2)*...*(n-(n+1))
		
		for(i=1;i<=n;i++)
		{
			wynik=wynik*i;
		}
			printf("Wynik= %lld\n",wynik);
		
		
	}
	else
	{
		printf("Blad: 1");
	}
	
	getchar();
	return 0;
}
