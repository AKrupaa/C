//Napisz program wyœwietlaj¹cy 10 liczb losowych z zakresu <10;20>
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	int zarodek;
   	zarodek=4;
    srand(zarodek);
    for(i=0;i<10;i++)
	printf("%i ",rand()%10+10);
	getchar();
	return 0;
}
