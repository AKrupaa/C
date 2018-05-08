#include <stdio.h>
#include <stdlib.h>

void wielkie(char *wtab, int *roz)
{
	int i;
	for(i=0;i<*roz;i++)
	{
		*(wtab+i)=toupper(*(wtab+i));
	}
}


int main()
{
	char tab[100];
	char *wtab;
	wtab=tab;
	printf("Wpisz wyraz: ");
	int i;
	char ch;
	int rozmiar=100;
	for(i=0;i<100;i++)
	{
		scanf("%c",&ch);
		if(ch=='\n')	
		{
			rozmiar=i;
			break;
		}
		*(wtab+i)=ch;
	}

	wielkie(wtab,&rozmiar);
	
	FILE *stream;
	if((stream=fopen("zadanie2.txt","w"))==NULL)
	{
		printf("Blad pliku (W)");
		return -1;
	}

	for(i=0;i<rozmiar;i++)
	{
		printf("%c",*(wtab+i));		//wypisuje ten wyraz
		fprintf(stream,"%c",*(wtab+i));
	}
	
	fseek(stream,0,SEEK_END);
	int rozmiarP=ftell(stream);
	
	fclose(stream);
	
	printf("\nRozmiar pliku: %i", rozmiarP);
	return 0;
}

