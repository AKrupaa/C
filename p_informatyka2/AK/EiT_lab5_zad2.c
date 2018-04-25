#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	/*
	1)
		sortowanie b¹belkowe przed i po.
		
	2)
		odczytaj to co zapisalo i wypisz na ekran
	*/
	
	FILE* streamW;
	FILE* streamA;
	//streamW = fopen("sort.txt", "w");
	
	if ( ( streamW = fopen( "sort.txt", "w" ) ) == NULL )
	{
		printf("Nie ma dostêpu do pliku (W).");
		return 0;
	}
	
	srand(time(NULL));
	int tab[10];
	
	int i;
	for(i=0;i<10;i++)
	{
		tab[i]=rand()%8;
		fprintf( streamW, "%i", tab[i]);
	}
	
	fprintf(streamW, "\n\n");
	
	fclose(streamW);
	
	
	//streamA = fopen("sort.txt", "a");
	
	if ( ( streamA = fopen( "sort.txt", "a" ) ) == NULL )
	{
		printf("Nie ma dostêpu do pliku (A).");
		return 0;
	}
	
	//babelkowe asc
	int temp; 
	int j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10-1-i;j++)
		{
			if(tab[j]>tab[j+1])
			{
				temp=tab[j+1];
				tab[j+1]=tab[j];
				tab[j]=temp;
			}
		}
	}	
	
	for(i=0;i<10;i++)
	{
		fprintf( streamA, "%i", tab[i]);
	}
	
	
//	fprintf( streamA, "\nPozdrawiam!");
	fclose( streamA ); 
	
	
	//2)  odczytaj to co zapisalo i wypisz na ekran
	
	FILE* streamR;
	streamR=fopen("sort.txt", "r");
	
	if ( ( streamR = fopen( "sort.txt", "r" ) ) == NULL )
	{
		printf("Nie ma dostêpu do pliku (R).");
		return 0;
	}
	
	char tab1[1000];
	int counter=0;
	int a;
	while(!feof(streamR))
	{
		fscanf(streamR,"%c", &a);
		tab1[counter++]=a;
		printf("%c",a);
		
	}
	counter--; //bo sprawdzam EOF a potem wykonuje instukcje ... u know.
	
	printf("\n HI \n");
	for(i=0;i<counter;i++)
	{
		printf("%c",tab1[i]);
	}
	
	fclose(streamR);
	
	
	return 0;
}
