#include <stdio.h>
#include <stdlib.h>

void wylacz_PC()
{
    char * ptr;
    int x = 100;
    while(1)
    {
		ptr = (char *) malloc(x++ * sizeof(char));
		if(ptr==NULL) break;	//for safety
    	printf("%p\n",ptr);
    }
	free(ptr);
}

int main()
{
/*	char *wsk;
	int rozmiar;
//	scanf("%i", &rozmiar);
	wsk = (char *) malloc(5 * sizeof(char));  //za 5 wstaw rozmiar ;)
	free(wsk);
	
*/
	wylacz_PC();
	
	return 0;
}
