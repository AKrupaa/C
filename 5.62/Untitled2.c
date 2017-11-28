/*
Napisz program, który pobierze od u¿ytkownika ³añcuch tekstowy sk³adaj¹cy siê wy³¹cznie z liter i bia³ych znaków 
i zrobi statystykê pod k¹tem liczby samog³osek wystêpuj¹cych w wyrazie (bez rozró¿niania pomiêdzy du¿ymi i ma³ymi literami). 
Program ma wypisaæ w konsoli wynik w postaci liczba samog³osek - liczba wyrazów, 
w których siê znajduje tyle samog³osek, ka¿da para ma byæ wypisana w osobnej linii. 
D³ugoœæ ci¹gu wejœciowego nie przekroczy 1000 znaków.
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
