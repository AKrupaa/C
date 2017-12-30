#include <stdio.h>
#include <ctype.h>

int my_strlen(char tab[]);
int my_atoi(char str[]);
float my_atof(char str[]);

int main()
{
	char tab[15];
	
	fgets (tab, 15, stdin);
    printf( "Wczytany tekst: %s\n", tab );
    printf( "mystrlen: %d\n", my_strlen(tab)) ;
    //printf("strlen %d\n", strlen(tab)); //licze poprawnie
    printf("myatoi: %d\n", my_atoi(tab));
    //printf("atoi: %d\n", atoi(tab));
    printf("myatof: %.4f\n", my_atof(tab));
    //printf("atof: %f", atof(tab));
	return 0;
}

int my_strlen(char tab[])
{
    int i = 0, sum = 0;
    char c = tab[0];

    while(c != '\0') 
	{
    	sum++;
    	c = tab[++i];
    }
    
    return sum;
}

//prosta wersja...
int my_atoi(char str[])
{
	int wynik=0;
	int flaga=0;
	int i=0;
	
	
	if(str[0]=='-')
	{
		for(i=1;i<str[i]!='\0'&&flaga==0;i++)
		{
			if(isdigit(str[i]))
			wynik=(wynik*10)+(str[i]-48);
			else
			flaga=1;
		}
		wynik*=-1;
		return wynik;
	}
	else
	{
		for(i=0;i<str[i]!='\0'&&flaga==0;i++)
		{
			if(isdigit(str[i]))
			wynik=(wynik*10)+(str[i]-48);
			else
			flaga=1;
		}
		
		return wynik;
	}
}


float my_atof(char str[])
{
	float wynik=0;
	int wynikkropka=0;
	int iledziesiec=1;
	int flaga=0;
	int kropka=0;
	int indeks;
	
	
	if(str[0]=='-')
	{	
		for(int i=1;i<str[i]!='\0'&&flaga==0;i++)
		{
			if(isdigit(str[i]))
			wynik=(wynik*10)+(str[i]-48);
			else
			{
				flaga=1;
				if(str[i]=='.'&&isdigit(str[i+1])) //i jest po niej liczba?
				{
					indeks=i;
					kropka=1;
				}
			}
		}
		//gdy znaleziono kropke i jest po niej liczba
		if(kropka==1)
		{
			flaga=0;
			for(int i=indeks+1;i<str[i]!='\0'&&flaga==0;i++)
			{
				if(isdigit(str[i]))
				{
				//	printf("co to za liczba?: %c\n",str[i]);
					wynikkropka=(wynikkropka*10)+(str[i]-48);
				//	printf("ile wynosi?: %i\n",wynikkropka);
					iledziesiec*=10;
				//	printf("ile mam 10??: %i\n",iledziesiec);
				}
				else
				flaga=1;
			}
		}
		wynik+=((float)wynikkropka/(iledziesiec));
		wynik*=-1;
		return wynik;
	}
	else
	{
		//bez zadnych minusow
		for(int i=0;i<str[i]!='\0'&&flaga==0;i++)
		{
			if(isdigit(str[i]))
			wynik=(wynik*10)+(str[i]-48);
			else
			{
				flaga=1;
				if(str[i]=='.'&&isdigit(str[i+1])) //i jest po niej liczba?
				{
					indeks=i;
					kropka=1;
				}
			}
		}
		//gdy znaleziono kropke i jest po niej liczba
		if(kropka==1)
		{
			flaga=0;
			for(int i=indeks+1;i<str[i]!='\0'&&flaga==0;i++)
			{
				if(isdigit(str[i]))
				{
					wynikkropka=(wynikkropka*10)+(str[i]-48);
					iledziesiec*=10;
				}
				else
				flaga=1;
			}
		}
		wynik+=((float)wynikkropka/(iledziesiec));
		return wynik;
	}
}
