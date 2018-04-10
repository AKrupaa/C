#include <stdio.h>
#include <math.h>

int plus10(int *wsk1)
{
	*wsk1=*wsk1+10;
	return *wsk1;
}

int dodaj(int )

int main()
{
	int a=10;
	int *wsk;
	int *wsk2;
	wsk=&a;
	wsk2=&a;
	
	plus10(wsk);
	

	return 0;
}
