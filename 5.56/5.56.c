/*
Napisz program, który pobierze od u¿ytkownika ³añcuch tekstowy sk³adaj¹cy siê wy³¹cznie z liter 
i bia³ych znaków 
i policzy dla ka¿dej litery liczbê jej wyst¹pieñ 
(bez rozró¿niania pomiêdzy du¿ymi i ma³ymi literami). 
Program ma wypisaæ w konsoli wynik w postaci litera - liczba wyst¹pieñ, ka¿da litera ma byæ w osobnej linii. 
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
	
	scanf("%c", &znak);
	if((znak>=65 && znak<=90) || (znak>=97 && znak<=122)) 	//65-90 to wielkie litery ; 97-122 to male
	tab[i++]=znak;
	
	if(znak=='\n')
	printf("Wcisnieto na poczatku ENTER. Nastepuje wyjscie z programu");
	while(i<max&&znak!='\n')
	{
		scanf("%c", &znak);
		if((znak>=65 && znak<=90) || (znak>=97 && znak<=122)) 	//65-90 to wielkie litery ; 97-122 to male
		tab[i++]=znak;
	}	
	//wczytywanie /\
	
	// litera - liczba wystapien
	//zamiana wielkich liter na male
	int wartosc1,wartosc2;
	for(int q=0;q<i;q++)
	{
		// Q == q
			wartosc1=tab[q];
			if(wartosc1<91)
			{
				wartosc1=wartosc1+32;
				tab[q]=wartosc1;
			}
	
	}
	
	
	int x=97;
	for(x;x<=122;x++)
	{
		for(int q=0;q<=i;q++)
		{
			if(tab[q]==x)
			{
				suma++;
			}
		}
		
			printf("%c ", x);
			printf("%i\n", suma);
			suma=0;
	}
	
	return 0;	
}
