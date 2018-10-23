#include <stdlib.h>
#include <stdio.h>
#include "funkcje.h"

int main(void)
{
 	tstack *s1=NULL;

	s1 = init();

	
	for(i=0; i<= 12; i++)
	{
		int el = i*2 + 3;
		printf("%d  %d\n",push(s1,el),el);
	};

	for(i=0; i<= 10; i++)
		printf("%d  %d\n",i,pop(s1));

	while(!isempty(s1))
		printf("%d\n",pop(s1));

	close(s1);
	return 0;
}
