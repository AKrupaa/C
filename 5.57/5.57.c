/*
Napisz program, który pobierze od u¿ytkownika ³añcuch tekstowy zawieraj¹cy wy³¹cznie ma³e i wielkie litery ³aciñskie. 
Program ma policzyæ ile wyrazów znalaz³o siê w podanym przez u¿ytkownika tekœcie 
(wyrazy mog¹ sk³adaæ siê wy³¹cznie z liter, oddzielone mog¹ byæ bia³ymi znakami, myœlnikami b¹dŸ znakami interpunkcyjnymi). 
D³ugoœæ ci¹gu wejœciowego nie przekroczy 1000 znaków.
*/


#include <stdio.h>
#include <string.h>


int main()
{
	const int max=1000;
	char tab[1000];
	int suma = 0;
	int i=0;
	char znak;
	
	printf("Wprowadz lancuch tekstowy skladajacy sie wylacznie z liter i bialych znakow\n");
	printf("ENTER przerywa wczytywanie tekstu\n");
	//oddzielone mog¹ byæ bia³ymi znakami, myœlnikami b¹dŸ znakami interpunkcyjnymi
	scanf("%c", &znak);
	//65-90 to wielkie litery ; 97-122 to male
	//44 to , ; 45 to -  46 to . ; 59 to ; ;
	if((znak>=65 && znak<=90) || (znak>=97 && znak<=122) || znak==' ' || znak>=45&&znak<=46 || znak==59) 	
	tab[i++]=znak;
	
	if(znak=='\n')
	printf("Wcisnieto na poczatku ENTER. Nastepuje wyjscie z programu");
	while(i<max&&znak!='\n')
	{
		scanf("%c", &znak);
		//65-90 to wielkie litery ; 97-122 to male
		//44 to , ; 45 to -  46 to . ; 59 to ; ;
		if((znak>=65 && znak<=90) || (znak>=97 && znak<=122) || znak==' ' || (znak>=45&&znak<=46) || znak==59) 	
		tab[i++]=znak;
	}	
	//wczytywanie /\
	
	for(int q=0; q<i; q++)
	{
		if((tab[q]>=65 && tab[q]<=90) || (tab[q]>=97 && tab[q]<=122))
		{
			
			if(tab[q+1]==' '|| (tab[q+1]>=44 && tab[q+1]<=46) || tab[q+1]==59)
			{
				if((tab[q+2]>=65 && tab[q+2]<=90) || (tab[q+2]>=97 && tab[q+2]<=122))
				suma++;
			}
		}
	}
	if(i>1)
	{
		suma++;
	}
	printf("%i", suma);
	
	return 0;
}
