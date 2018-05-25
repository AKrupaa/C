#include <stdio.h>
//Napisz funkcje do obliczania wartoœæ funkcji n! metod¹ iteracyjn¹ i rekurencyjn¹, 
//funkcje powinny mieæ nastêpuj¹ce prototypy:


unsigned long factorial_it(int n);
unsigned long factorial_rec(int n);

int main()
{
	printf("Liczba: ");
	int silnia;
	scanf("%i",&silnia);
	
	printf("Silnia= %lu\n", factorial_it(silnia));
	printf("Silnia= %lu", factorial_rec(silnia));
	return 0;
}

//n!=1*2*...*(n-3)(n-2)(n-1)n
unsigned long factorial_it(int n)
{
	unsigned long silnia=1;
	if(n<=1)
	{
		silnia=1;
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
		silnia*=i;
		}
	}
	return silnia;
}

unsigned long factorial_rec(int n)
{
	unsigned long silnia=1;
	if(n<=1)
		silnia=1;
	else
		//										5!=5*4*3*2*1
		//2!=2*1!	3!=3*2!	4!=4*3!	5!=5*4!...	5!=5*4! = 5*4*3! = 5*4*3*2! = 5*4*3*2*1! koniec
		silnia=n*factorial_rec(n-1);
	return silnia;
}

/*
	n=4;
	silnia=4*silnia(n-1) //n=4
	silnia=4*3*silnia(n-1)	//n=3
	silnia=4*3*2*silnia(n-1)	//n=2
	silnia=4*3*2*1*silnia(n-1)	//n=1
	silnia(n-1)<=1	//n=1 -> zadzial warunek wiec...
	return silnia;
*/
