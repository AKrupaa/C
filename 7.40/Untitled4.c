#include <stdio.h>
#include <ctype.h>
#include <string.h>

int find_any_of(char tab[], char tab2[], int size2);
int find_any_of_end(char tab[], char tab2[], int size2);

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

	
	int pierwszy=find_any_of(tab, tab2, b);
	int ostatni=find_any_of_end(tab, tab2, b);
	printf("%i\n",pierwszy);
	printf("%i\n",ostatni);
	return 0;
}


int find_any_of(char tab[], char tab2[], int size2)
{
	//abcdefg abcdefg
	//cdef
	int first=1001;
	int dlugosc1=strlen(tab);
	for(int i=0;i<dlugosc1;i++)
	{
		for(int j=0;j<size2;j++)
		{
			if(tab[i]==tab2[j])
			{
				if(first>i)
				first=i;
			}
		}
	}
	return first;
}

int find_any_of_end(char tab[], char tab2[], int size2)
{
	//abcdefg abcdefg
	//cdef
	int last=-1;
	int dlugosc1=strlen(tab);
	for(int i=dlugosc1-1;i>=0;i--)
	{
		for(int j=0;j<size2;j++)
		{
			if(tab[i]==tab2[j])
			{
				if(last<i)
				last=i;
			}
		}
	}
	return last;
}
