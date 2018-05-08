#include <stdio.h>

int main()
{
	//1
	int tab[10];
	printf("wprowadz dane: ");
	int i;
	int *wtab;
	wtab=tab;
	for(i=0;i<10;i++)
	scanf("%i",&tab[i]);
/*
	for(i=0;i<10;i++)
	printf("%i", *(wtab+i));
*/	
	FILE *stream;
	if((stream=fopen("zadanie1.txt","w"))==NULL)
	{
		printf("Blad pliku (W)");
		return -1;
	}

	for(i=0;i<10;i++)
	{
		fprintf(stream,"%i",*(wtab+i));
	}
	
	fclose(stream);
	
	
	int j;
	int temp;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10-1;j++)
		{
			if(*(wtab+j)<*(wtab+j+1))
			{
				temp=*(wtab+j);
				*(wtab+j)=*(wtab+j+1);
				*(wtab+j+1)=temp;
			}
		}
	}
	
/*	printf("\n\n");
	
	for(i=0;i<10;i++)
	printf("%i", *(wtab+i));
*/	
	
	if((stream=fopen("zadanie1.txt","a"))==NULL)
	{
		printf("Blad pliku (A)");
		return -2;
	}

	fprintf(stream,"\n");
	for(i=0;i<10;i++)
	{
		fprintf(stream,"%i",*(wtab+i));
	}
	
	fclose(stream);
	
	return 0;
}
