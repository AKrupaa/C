#include <stdio.h>

int main()
{
	int a = 5;
	float b =2.5;
	void *wsk;
	wsk=&a;
	printf("Adres: %i	Wskaznik: %i\n", &wsk, *(int *)wsk);	
	wsk=&b;
	printf("Adres: %i	Wskaznik: %f\n", &wsk, *(float *)(wsk));
	return 0;
}
