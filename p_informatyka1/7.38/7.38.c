#include <stdio.h>
#include <ctype.h>
#include <string.h>

int find(char tab[], char c);
int find_end(char tab[], char c);

int main()
{
	char tab[1000];
	char znak;
	int a=0;
	
	printf("Podaj ciag znakow: \n");
	
	scanf("%c",&znak);
	if(znak!='\n')
	tab[a++]=znak;
	
	while(znak!='\n'&&a<1000)
	{
		scanf("%c",&znak);
		if(znak!='\n')
		tab[a++]=znak;		
	}
	
//	for(int i=0;i<a;i++)
//	printf("%c",tab[i]);
	printf("\nwprowadz szukany znak\n");
	scanf("%c",&znak);
	
	int pierwszy=find(tab,znak);
	int ostatni=find_end(tab,znak);
	printf("%i\n",pierwszy);
	printf("%i\n",ostatni);
	int dlugosc=ostatni-pierwszy;
	printf("%i\n",dlugosc);
	return 0;
}

int find(char tab[], char c)
{
	int flaga=0;
	int dl=strlen(tab);
	for(int i=0;i<dl&&flaga==0;i++)
	{
		if(tab[i]==c)
		{
			flaga=1;
			return i; //czyli indeks pierwszego znaku
		}
	}
	
	if(flaga==0)
	return -1;
}


int find_end(char tab[], char c)
{
	int flaga=0;
	int dl=strlen(tab);
	for(int i=dl;i>=0&&flaga==0;i--)
	{
		if(tab[i]==c)
		{
			flaga=1;
			return i; //czyli indeks ostatniego znalezionego znaku
		}
	}
	
	if(flaga==0)
	return -1;
}
