#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int wynik;
	wynik= rand()%2 ? 1 : 0; //1 orzel, 0 reszka;
	printf("%i", wynik);
	return 0;
}
