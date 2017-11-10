//Napisz program wyœwietlaj¹cy 10 liczb losowych
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	 for(i= 0; i< 10; ++i)
        printf("%2d. liczba pseudolosowa to %d\n", i+1, rand());
        getchar();
	return 0;
}
