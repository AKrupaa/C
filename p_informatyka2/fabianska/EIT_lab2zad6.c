#include <stdio.h>

int strlengh(char * s) 
{
	int suma=0;
    for (; *s != '\0'; s++) suma++;
    return suma;
}


int main()
{
	char tab[100];
	char *wtab;
	wtab=tab;
	printf("Wprowadz ciag znakow:\n");
	fgets(wtab,100,stdin);

	printf("%i", strlengh(wtab));
	
	return 0;
}
