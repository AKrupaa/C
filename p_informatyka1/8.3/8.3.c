#include <stdio.h>

int fibonacci(int n);


int main()
{
	printf("Ktory wyraz ciagu fibonacciego chcesz wyznaczyc: ");
	int fib;
	scanf("%i",&fib);
	
	printf("Wynik= %lu\n", fibonacci(fib));
	return 0;
}

int fibonacci(int n)
{
	int fibo;
	if(n<0)
		return -1;
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	if(n>1)
	{
		fibo=fibonacci(n-1)+fibonacci(n-2);
	}
	return fibo;
}
