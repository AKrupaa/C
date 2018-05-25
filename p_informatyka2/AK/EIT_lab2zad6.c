#include <stdio.h>

int strlengh(char * s) 
{
	int suma=0;
    for (; *s != '\0'; s++) suma++;
    return suma;
}

int strlengh2(char *s)
{
	char *p;
	p=s;
	for(; *p!='\0'; p++) {}
	return p-s;
}

int main()
{
	char tab[100];
	char *wtab;
	wtab=tab;
	printf("Wprowadz ciag znakow:\n");
	fgets(wtab,100,stdin);

	printf("F1: %i\n", strlengh(wtab));
	printf("F2: %i", strlengh2(wtab));
	
	return 0;
}
