//Napisz program wyœwietlaj¹cy liczbê losow¹ z zakresu <30;40>
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int zarodek;
   	zarodek=4;
    srand(zarodek);
	printf("%i ",rand()%10+30);
	getchar();
	return 0;
}
