#include <stdio.h>
#include <ctype.h>

int main()
{
	enum {true=1, false=0} abc;
	char ch;
	printf("Podaj znak: ");
	scanf("%c", &ch);
	if(isdigital(ch))
	{
		abc=true;
	}
	else
	{
		abc=0;
	}
	
	printf("%i", abc);
	
	return 0;
}
