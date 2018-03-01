#include <stdio.h>
#include <ctype.h>
#include <string.h>

int licz(char tab[10][20], int ktory)	//np. dla jednego calego rzedu ('ktory'ego)
{
		int suma=0;
		int i;
		for(i=0;i<20;i++)
		{
			if(islower(tab[ktory][i])) suma++;
		//	printf("%i SUMA=%i\n",i+1,suma);
		}
		
	//	printf("TU:\n%i\n",tab[0][14]);
	//	printf("%i\n",tab[0][15]);
	//	printf("%i\n",tab[0][16]);
	//	printf("%i\n",tab[0][17]);
	//	printf("%i\n",tab[0][18]);
	//	printf("%i\n",tab[0][19]);
	//	printf("%i\nKONIEC\n",tab[0][20]); ?forfun
	
		return suma;
}

//strcpy(s1,s2) drugi argument zapisuje do tego pierwszego STRINGI 
//strcmp(s1,s2) porownywanie dwoch stringow, zwraca 0 jezeli sa takie same stringi, s1>s2 to zwaraca 1
//Ala s1
//ala s2
// zwroci -1.
// ala ala -> zwroci 0

void bubble_sort_desc(char tab[10][20], int size)
{
	printf("\n");
	int i,j;
	int posortowane=0;
	char temp[20];
	for(i=0;i<size&&posortowane==0;i++)		//size=ile rzedow wyrazow max 10, uwarunkowane wczesniej
	{
		int zamiana=0;
		for(j=0;j<size-1-i;j++)
		{
			int W1=licz(tab, j);
			int W2=licz(tab, j+1);
			//printf("\n W1 = %i, W2 = %i\n", W1, W2);
			
			if(W1 < W2)	// jezeli np. 1 rzad ma mniej liter niz 2 rzad to zamien:
			{
		//		strcpy(s1,s2) //s2 kopiuje do s1;
		//		temp=tab[j+1];
				strcpy(temp,tab[j+1]);
		//		tab[j+1]=tab[j];
				strcpy(tab[j+1],tab[j]);
		//		tab[j]=temp;
				strcpy(tab[j],temp);
				zamiana=1;
			}
		}
		if(zamiana==0) posortowane=1;
	}
}

void wypisz(char tab[10][20], int ile)
{
	int i;
	for(i=0;i<ile;i++)
		fputs(tab[i],stdout);
}

int main()
{
	char tab[10][20];
	int i, j, d, ile,k;
	int suma=0;
	do
	{
		printf("Ile wyrazow wczytac? ");
		d=scanf("%i",&ile);
		fflush(stdin);
	} while(d!=1||ile<1||ile>10);
	
	for(j=0;j<10;j++)	//wypelniam zerami '0', bo czesto sie zdarzalo ze wystepowala jakas losowa litera na pozycji 18...
		{
			for(k=0;k<20;k++)
				tab[j][k]='0';
		}
		
	for(i=0;i<ile;i++)
	{
		printf("Wprowadz wyraz %i: ",i+1);
		fgets(tab[i],20,stdin);
	}
	
	for(i=0;i<ile;i++)	//licze kazdy rzad
	suma+=licz(tab,i);	//tab, ktory
	//zliczam ile jest malych literek we wszystkich rzedach
	
	wypisz(tab,ile);
	printf("Suma malych literek: %i", suma);
	
	bubble_sort_desc(tab,ile);
	wypisz(tab,ile);
	return 0;
}
