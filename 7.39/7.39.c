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
	return 0;
}

int search(char tab[], char tab2[])
{
	int dlugosc1=strlen(tab);
	int dlugosc2=strlen(tab2);
	int ile=0;
	int flaga=0;
	int na_ktorym_miejscu;
	//abcde
	//cd
	
	for(int i=0;i<dlugosc1&&flaga!=1;i++)
	{
		if(tab[i]==tab2[0])
		{
		
			for(int j=0;j<dlugosc2;j++)
			{
				if(tab2[j]==tab[i+j])
				ile++;
			}
			if(ile==dlugosc2)
			{
				flaga=1;
				na_ktorym_miejscu=i;
			}
			else
			ile=0;
		}
		
		
	}
	return na_ktorym_miejscu;
}


int search_end(char tab[], char tab2[])
{
	int dlugosc1=strlen(tab);
	int dlugosc2=strlen(tab2);
	int ile=0;
	int flaga=0;
	int na_ktorym_miejscu;
	//abcde 
	//cd
	
	for(int i=dlugosc1-1;i>=0&&flaga!=1;i--)
	{
		if(tab[i]==tab2[dlugosc2-1])
		{
			for(int j=0;j<dlugosc2;j++)
			{
				if(tab2[dlugosc2-1-j]==tab[i-j])
				ile++;
			}
			if(ile==dlugosc2)
			{
				flaga=1;
				na_ktorym_miejscu=i-dlugosc2+1;
			}
			else
			ile=0;
		}
	}
	return na_ktorym_miejscu;		
}
