#include <stdio.h>
#include <ctype.h>

void lower(char *tab)
{
	int i;
	for(i=0;tab[i];i++)
	*(tab+i)=tolower(*(tab+i));
}

void upper(char *tab)
{
	int i;
	for(i=0;*(tab+i)!='\0';i++)
	*(tab+i)=toupper(*(tab+i));
}

void wypisz(char *tab)
{
	int i;
	for(i=0;tab[i];i++)
	printf("%c",*(tab+i));
}

int main()
{
	int temp;
	char tab[20];
	char *wtab;
	wtab=tab;
	printf("Wprowadz wyraz: ");
	fgets(wtab,20,stdin);
	
	printf("Zamienic dany wyraz na\n(1)male?\n(2)WIELKIE?\n");
	scanf("%i", &temp);
	
	switch(temp)
	{
		case 1: lower(&wtab[0]);
		break;
		case 2: upper(&wtab[0]);
		break;
		default: printf("Wybieraj madrze!\n");	
	}	
	
	wypisz(wtab);
	
	return 0;
}
