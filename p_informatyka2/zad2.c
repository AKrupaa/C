#include <stdio.h>
#include <time.h>
#include <math.h>
#define MAX 10

int maks(int *wtab)
{
	int i;
	int *wynik;
	wynik=wtab;
	
	for(i=1;i<MAX;i++)
		if(*(wtab+i)>*wynik)
		*wynik=*(wtab+i);
		
	return *wynik;
}

int mini(int *wtab)
{
	int i;
	int *wynik;
	wynik=wtab;
	
	for(i=1;i<MAX;i++)
		if(*(wtab+i)<*wynik)
		*wynik=*(wtab+i);
		
	return *wynik;
}

int main()
{
	srand(time(NULL));
	
	int i;
	int tab[MAX];
	int *wtab;
	wtab=tab;
	for(i=0;i<MAX;i++)
	*(wtab+i)=rand()%8;
	
	for(i=0;i<MAX;i++)
	printf("%i ", *(wtab+i));
	
	int maxW=*(wtab);
	
	for(i=1;i<MAX;i++)
	{
		if(*(wtab+i)>maxW)
		maxW=*(wtab+i);
	}
	
	printf("\nMAX wartosc= %i", maxW);
	
	maxW=*(wtab);
	for(i=1;i<MAX;i++)
		if(*(wtab+i)<maxW)
		maxW=*(wtab+i);
	
	printf("\nMin wartosc= %i", maxW);
	
	printf("\nfunkcja MAX wartosc= %i", maks(tab));
	printf("\nfunkcja MINI wartosc= %i", mini(tab));

	int j;
	int temp;
	int posortowane=0;
	int zamiana=0;
	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX-1-i;j++)
		{
			if(*(wtab+j)<*(wtab+j+1))
			{
				temp=*(wtab+j+1);
				*(wtab+j+1)=*(wtab+j);
				*(wtab+j)=temp;
			}
		}
	}
	
	printf("\n");
	for(i=0;i<MAX;i++)
	printf("%i ", *(wtab+i));
	
	//suma i srednia
	int suma=0;
	float srednia;
	for(i=0;i<MAX;i++)
		suma+=*(wtab+i);
		
	srednia=(float)suma/MAX;
	
	printf("\nSuma=%i\nSrednia=%f\n", suma,srednia);
	
	//liczby parzyste
	printf("Liczby parzyste: ");
	for(i=0;i<MAX;i++)
	{
		if(*(wtab+i)%2==0)
		printf("%i ",*(wtab+i));
	}
	
	//liczby nieparzyste
	printf("\nLiczby nieparzyste: ");
	for(i=0;i<MAX;i++)
	{
		if(*(wtab+i)%2==1)
		printf("%i ",*(wtab+i));
	}	
	
	//liczby pierwsze
	printf("\nLiczby nie pierwsze:\n");
	for(i=0;i<MAX;i++)
	{
		int temp=*(wtab+i);
		for(j=2;j<=sqrt(temp);j++)
		{
			if(temp%j==0)
			{
				printf("%i nie jest liczba pierwsza\n",*(wtab+i));
				break;
			}
		}

	}	
	
	return 0;
}
