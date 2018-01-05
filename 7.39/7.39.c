#include <stdio.h>
#include <ctype.h>
#include <string.h>

int search(char tab[], char tab2[]);
int search_end(char tab[], char tab2[]);

int main()
{
	char tab[1000];
	char tab2[1000];
	int b=0;
	char znak;
	int a=0;
	
	printf("Podaj ciag1 znakow: \n");
	
	scanf("%c",&znak);
	if(znak!='\n')
	tab[a++]=znak;
	
	while(znak!='\n'&&a<1000)
	{
		scanf("%c",&znak);
		if(znak!='\n')
		tab[a++]=znak;		
	}
	
	//------------------------
	
	printf("Podaj szukany ciag znakow: \n");
	
	scanf("%c",&znak);
	if(znak!='\n')
	tab2[b++]=znak;
	
	while(znak!='\n'&&b<1000)
	{
		scanf("%c",&znak);
		if(znak!='\n')
		tab2[b++]=znak;		
	}
	
//	for(int i=0;i<a;i++)
//	printf("%c",tab[i]);

	
	int pierwszy=search(tab,tab2);
	int ostatni=search_end(tab,tab2);
	printf("%i\n",pierwszy);
	printf("%i\n",ostatni);
//	int dlugosc=ostatni-pierwszy;
//	printf("%i\n",dlugosc);
	return 0;
}

int search(char tab[], char tab2[])
{
	char znakp=tab2[0];	
	
	int flaga=0;
	int dl=strlen(tab);
	for(int i=0;i<dl&&flaga==0;i++)
	{
		if(tab[i]==znakp)
		{
			flaga=1;
			return i; //czyli indeks pierwszego znaku
		}
	}
	
	if(flaga==0)
	return -1;
}


int search_end(char tab[], char tab2[])
{
	//zle
	char znakk=tab2[0];
	int poczatek=search(tab,tab2);
	
	int koniec1=strlen(tab);
	
	int flaga=0;
	int dl=strlen(tab);
	for(int i=koniec1;i>=poczatek&&flaga==0;i++)
	{
		if(tab[i]==znakk)
		{
			flaga=1;
			return i; //czyli indeks ostatniego znalezionego znaku
		}
	}
	
	if(flaga==0)
	return -1;
}
