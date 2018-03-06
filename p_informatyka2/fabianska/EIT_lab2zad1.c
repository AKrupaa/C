#include <stdio.h>

int main()
{
	int liczba;
	int *wl;
	
	liczba=5;
	wl=&liczba;
	
	printf("bezposrednio: %i\n", liczba);
	printf("wartosc z wyk. wsk.: %i\n", *wl);
	printf("adres: %i\n", wl);
	*wl=*wl+2;
	//liczba=liczba+2;
	printf("wartosc z wyk. wsk.+2: %i\n", *wl);
	
	return 0;
}
