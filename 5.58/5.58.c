/*
Napisz program, który zrobi statystykê wyst¹pieñ s³ów pod wzglêdem ich d³ugoœci. 
S³owa to ci¹gi nastêpuj¹cych po sobie znaków. 
Na wyjœciu ma siê pojawiæ d³ugoœæ s³owa i liczba wyst¹pieñ s³ów o takiej d³ugoœci, 
w kolejnoœci od najkrótszych do najd³u¿szych. 
Program ma wypisaæ d³ugoœci tylko tych s³ów, które pojawi³y siê przynajmniej raz w tekœcie. 
D³ugoœæ ci¹gu wejœciowego nie przekroczy 1000 znaków.
*/

#include <stdio.h>

int main()
{
	const int max=1000;
	char tab[1000];
	char znak;
	int i=0;
	int dlugosc=0;
	
	printf("Wprowadz lancuch tekstowy skladajacy sie wylacznie z liter i bialych znakow\n");
	printf("ENTER przerywa wczytywanie tekstu\n");
	
	tab[i++]='0';
	
	scanf("%c", &znak);	//i=1
	//65-90 to wielkie litery ; 97-122 to male
	if((znak>=65 && znak<=90 ) || (znak>=97 && znak<=122 ) || znak==' ')
	{
		if(znak==' ')
		{
			tab[i++]='0';
		}
		else
		{
			tab[i++]=znak;
		}
	}
	
	if(znak=='\n')
	{
		printf("Wcisnieto na poczatku ENTER. Nastepuje wyjscie z programu"); return 0;
	}
	
	while(i<max&&znak!='\n')
	{
			scanf("%c", &znak);
			//65-90 to wielkie litery ; 97-122 to male
			if((znak>=65 && znak<=90 ) || (znak>=97 && znak<=122 ) || znak==' ')
			{
				if(znak==' ')
				{
					tab[i++]='0';
				}
				else
				{
					tab[i++]=znak;
				}
			}
	}
	if(tab[i-1]!='0')
	tab[i++]='0';
	
	
	int tabD[1000];
	int o=0;
	
	
/*	for(int q=0;q<i;q++)
	printf("%c", tab[q]); */
	
	for(int q=0;q<i;q++)
	{
		if(tab[q]=='0')
		{
			for(int w=q+1;tab[w]!='0'&&w<i;w++)
			{
				dlugosc++;
				q=w;
			}
			tabD[o++]=dlugosc;
			dlugosc=0;
		}
	}
	
	/*	printf("\n");
		for(int q=0;q<o;q++)
		printf("%i ", tabD[q]); */
		
	int temp;
	for(int q=0;q<o;q++)
	{
		for(int w=0;w<o-1;w++)
		{
			if(tabD[w]>tabD[w+1])
			{
				temp=tabD[w+1];
				tabD[w+1]=tabD[w];
				tabD[w]=temp;
			}
		}
	}
	
	/*	printf("\n");
		for(int q=0;q<o;q++)
		printf("%i ", tabD[q]);	*/
	
	//printf("\n");
	//zrezygnuj z '0';
	int ile_wyrazow;
	int liczba;
	for(int q=1;q<o;q++)
	{
		ile_wyrazow=0;
		if(tabD[q+1]!=tabD[q])
		{
			for(int w=1;w<o;w++)
			{
				if(tabD[q]==tabD[w])
				{
					ile_wyrazow++;
				}
			}
			printf("ile takich wyrazow: %i  -  o dlugosc wyrazu: %i\n", ile_wyrazow, tabD[q]);
		}
	
	}
	
	
	return 0;
}
