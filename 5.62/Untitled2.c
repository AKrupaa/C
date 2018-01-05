/*
Napisz program, kt�ry pobierze od u�ytkownika �a�cuch tekstowy sk�adaj�cy si� wy��cznie z liter i bia�ych znak�w 
i zrobi statystyk� pod k�tem liczby samog�osek wyst�puj�cych w wyrazie (bez rozr�niania pomi�dzy du�ymi i ma�ymi literami). 
Program ma wypisa� w konsoli wynik w postaci liczba samog�osek - liczba wyraz�w, 
w kt�rych si� znajduje tyle samog�osek, ka�da para ma by� wypisana w osobnej linii. 
D�ugo�� ci�gu wej�ciowego nie przekroczy 1000 znak�w.
*/
#include <stdio.h>
#include <string.h>

int main()
{
	const int max=1000;
	char tab[1000];
	int i=0;
	char znak;
	int tabILE[1000];
	int o=0;
	int samogloski=0;
	
	printf("Wprowadz lancuch tekstowy skladajacy sie wylacznie z liter i bialych znakow\n");
	printf("ENTER przerywa wczytywanie tekstu\n");
	
	scanf("%c", &znak);
	if((znak>=65 && znak<=90) || (znak>=97 && znak<=122) ||znak==' ') 	//65-90 to wielkie litery ; 97-122 to male
	tab[i++]=znak;
	
	if(znak=='\n')
	printf("Wcisnieto na poczatku ENTER. Nastepuje wyjscie z programu");
	while(i<max&&znak!='\n')
	{
		scanf("%c", &znak);
		if((znak>=65 && znak<=90) || (znak>=97 && znak<=122)||znak==' ') 	//65-90 to wielkie litery ; 97-122 to male
		tab[i++]=znak;
	}	
	//wczytywanie /\
	
	//zamiana wielkich liter na male
	int wartosc1,wartosc2;
	for(int q=0;q<i&&tab[q]!=' ';q++)
	{
		// Q == q
			wartosc1=tab[q];
			if(wartosc1<91)
			{
				wartosc1=wartosc1+32;
				tab[q]=wartosc1;
			}
	}
	
	for(int q=0;q<i;q++)
	{
		if((tab[q]>96&&tab[q]<123))
		{
			samogloski=0;
			for(int j=q;j<i&&tab[j]!=' ';j++,q++)
			{
				if((tab[j]=='a')||(tab[j]=='e')||(tab[j]=='u')||(tab[j]=='o')||(tab[j]=='i')||(tab[j]=='y'))
				{
				//	printf("%c\n",tab[j]);
					samogloski++;
				}
			}
			tabILE[o++]=samogloski;	
		}
	}
	

	int temp;
	//sortowanie
	for(int q=0;q<o;q++)
	{
		for(int w=0;w<o-1;w++)
		{
			if(tabILE[w]>tabILE[w+1])
			{
				temp=tabILE[w];
				tabILE[w]=tabILE[w+1];
				tabILE[w+1]=temp;
			}
		}
	}
	//	for(int q=0;q<o;q++)
	//	printf("%i ",tabILE[q]);
	//	printf("\n");
	
		int maksymalna=tabILE[o-1];
		
	//	printf("maksymalna = %i\n",maksymalna);
	
	int ilewyrazow=0;
	for(int q=0;q<=maksymalna;q++)
	{
		ilewyrazow=0;
		for(int w=0;w<o;w++)
		{
			if(tabILE[w]==q)
			ilewyrazow++;
		}
		if(ilewyrazow!=0&&q!=0)
		printf("%i - %i\n",q,ilewyrazow);
	}


	
	return 0;
}
