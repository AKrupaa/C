/*
Napisz program, który policzy ile we wprowadzonym przez uzytkownika tekscie jest slów z co najmniej 2 samogloskami wystepujacymi kolo siebie. 
Dlugosc ciagu wejsciowego nie przekroczy 1000 znaków.
*/

#include <stdio.h>

int main()
{
	int i=0;
	const int max=1000;
	char tab[1000];
	char znak;
	printf("Program liczy ile we wprowadzonym przez uzytkownika tekscie jest slow z conajmniej 2 samogloskami wystepujacymi kolo siebie.\n");
	printf("Wprowadzenie ENTER przerywa wczytywanie tekstu.\n");
	
	tab[i++]='0';
	
	scanf("%c",&znak);
	if((znak>=65&&znak<=90)||(znak>=97&&znak<=122))	//65-90 -> wielkie   97-122 -> male
		tab[i++]=znak;
		
	if(znak==' ')
		tab[i++]='0';
	
	if(znak=='\n')	
	{
		printf("Wprowadzono ENTER na samym poczatku - nastepuje wyjscie z programu!"); return 0;
	}
	
	while((znak>=65&&znak<=90)||(znak>=97&&znak<=122)||znak==' ')	//65-90 -> wielkie   97-122 -> male
	{
		scanf("%c",&znak);
		if((znak>=65&&znak<=90)||(znak>=97&&znak<=122))
			tab[i++]=znak;
			
		if(znak==' ')
			tab[i++]='0';
	}
	
	if(tab[i-1]!='0')
	tab[i++]='0';
	
	//wypisanie
	for(int q=0;q<i;q++)
	printf("%c", tab[q]);
	printf("\n");
	//zamiana wielkich na male
	for(int q=0;q<i;q++)
	{
		if(tab[q]>=65&&tab[q]<=90)
		{
			tab[q]=tab[q]+32;
		}
	}
	
	//wypisanie
	for(int q=0;q<i;q++)
	printf("%c", tab[q]);
	printf("\n");
	
	int flaga=0;
	int wyraz=0;
	for(int q=0;q<i;q++)
	{
		flaga=0;
		if(tab[q]=='0')
		{
			for(int w=q+1;tab[w]!=0&&flaga==0;w++)
			{
				if((tab[w]=='a')||(tab[w]=='e')||(tab[w]=='u')||(tab[w]=='o')||(tab[w]=='i')||(tab[w]=='y'))
				{
					if((tab[w+1]=='a')||(tab[w+1]=='e')||(tab[w+1]=='u')||(tab[w+1]=='o')||(tab[w+1]=='i')||(tab[w+1]=='y'))
					{
						flaga=1;
						printf("%c ", tab[w]);
						printf("%c ", tab[w+1]);
						printf("\n");
					}
				}
				
				if(flaga==1)
				wyraz++;
				
			}
		}
	}
	
	printf("liczba wyrazow: %i", wyraz);
	return 0;
}
