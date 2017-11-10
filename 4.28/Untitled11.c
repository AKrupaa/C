//Napisz program sumuj¹cy 100 liczb losowych z zakresu <10;20>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int zarodek;
	int suma=0;
   	zarodek=4;
    srand(zarodek);
    for(i=0;i<10;i++)
    {
    printf("%i ",10+rand()%10);
	suma=suma+(10+rand()%10);
    }
	printf("Suma= %i",suma);
	getchar();
	return 0;
}
