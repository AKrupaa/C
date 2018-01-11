#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int find_any_of_ex(char tab[], char tab2[], int size2, int start);
int find_ex(char tab[], char c, int start);
int search_ex(char tab[], char tab2[], int start);



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

	
	//abcdefg abcdefg
	//cdef
	char c=tab2[0];
	int start=0;
	for(int i=start;i<a;i++)
	{
		if(find_ex(tab, c, i)!=-1) // -1 oznacza blad
		printf("%i ", find_ex(tab, c, i));
	}
	
	printf("\n");
	
	for(int i=start;i<a;i++)
	{
		if(search_ex(tab, tab2, i)!=-1) // -1 oznacza blad
		printf("%i ", search_ex(tab, tab2, i));
	}
	
	printf("\n");
	printf("%i", find_any_of_ex(tab, tab2, b, start));

	return 0;
}


int find_ex(char tab[], char c, int start)	//wszystkie wyst¹pienia pierwszej litery z drugiego ci¹gu w pierwszym ci¹gu
{
	//abcdefg abcdefg
	//c[...]def
		if(tab[start]==c)
			return start; //czyli indeks pierwszego znaku
		else
			return -1;
}

int search_ex(char tab[], char tab2[], int start) //wszystkie wyst¹pienia ca³ego drugiego ci¹gu w pierwszym ci¹gu,
{
	//int dlugosc1=strlen(tab);
	int dlugosc2=strlen(tab2);
	int ile=0;
	//abcdefabcdef
	//cd
	if(tab[start]==tab2[0])
	{
		for(int i=0;i<dlugosc2;i++)
		{
			if(tab[start+i]==tab2[i])
			ile++;
		}
		if(ile==dlugosc2)
		return start;
		else
		return -1;
	}
	else
	return -1;
}

int find_any_of_ex(char tab[], char tab2[], int size2, int start)	//pozycjê drugiego wyst¹pienia dowolnej litery drugiego ci¹gu w pierwszym ci¹gu.
{
	int flaga=0;
	srand(time(NULL));
	int random=rand()%(size2-1);
	int wystapienie=0;
	//abcdefg abcdefg
	//cdef
	char c=tab2[random];
	int dlugosc1=strlen(tab);
	
	for(int i=0;i<dlugosc1&&flaga!=1;i++)
	{
		if(tab[i]==c)
		{
			wystapienie++;
			if(wystapienie==2)
			{
				flaga=1;
				start=i;
			}
		}
	}
	return start;
}

