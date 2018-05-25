/*
Napisz program, który wyznaczy i wypisze w osobnych liniach wszystkie wyrazy o najwiêkszym stosunku liczby samog³osek 
do liczby spó³g³osek. D³ugoœæ ci¹gu wejœciowego nie przekroczy 1000 znaków.
*/
#include <stdio.h>
#include <string.h>

int main()
{
	char tab[1000];
	float stosunek[1000];
	int p=0;
	printf("Wprowadz znaki: ");
	gets(tab);
	printf("%s\n",tab);
	int samogloski=0;
	int samoMAX=0;
	int spolgloski=0;
	int spolMAX=0;
	float stosunekOK=0;
	for(int i=0;i<strlen(tab);i++)
	{
		if((tab[i]>64&&tab[i]<91)||(tab[i]>96&&tab[i]<123))
		{
			spolgloski=0;
			samogloski=0;
			samoMAX=0;
			spolMAX=0;
			for(int j=i;j<strlen(tab)&&tab[j]!=' ';j++,i++)
			{
				if((tab[j]=='a')||(tab[j]=='e')||(tab[j]=='u')||(tab[j]=='o')||(tab[j]=='i')||(tab[j]=='y')||(tab[j]=='A')||(tab[j]=='E')||(tab[j]=='U')||(tab[j]=='O')||(tab[j]=='I')||(tab[j]=='Y'))
				{
					//printf("%c\n",tab[j]);
					samogloski++;
					if(samoMAX<samogloski)
					samoMAX=samogloski;
				}
				else
				{
					//printf("%c\n",tab[j]);
					spolgloski++;
					if(spolMAX<spolgloski)
					spolMAX=spolgloski;
				}
			}
			stosunek[p++]=(float)samoMAX/spolMAX;
			
		}
	}
	stosunekOK=stosunek[0];
	for(int i=0;i<p;i++)
	{
		if(stosunekOK<stosunek[i])
		stosunekOK=stosunek[i];
	}
	int ktorywyraz[999];
	int kw=0;
	for(int i=0;i<p;i++)
	{
		if(stosunek[i]==stosunekOK)
		ktorywyraz[kw++]=i;
	}
	int wyraz=-1;
	int poczatek=0;
	int koniec=0;
	for(int i=0;i<strlen(tab);i++)
	{
		if((tab[i]>64&&tab[i]<91)||(tab[i]>96&&tab[i]<123))
		{
			wyraz++;
			poczatek=i;
			for(int j=i;j<strlen(tab)&&tab[j]!=' ';j++,i++)
			{
				koniec=j;	
			}	
		}
		for(int q=0;q<kw;q++)
		{
			if(wyraz==ktorywyraz[q])
			{
				printf("\n");
				for(poczatek;poczatek<=koniec;poczatek++)
				printf("%c",tab[poczatek]);
			}
		}
		
	}
	
	/*
	printf("\nsamo- = %i, \nspol- = %i,\n", samoMAX, spolMAX);
	printf("p=%i\n",p);
	for(int q=0;q<p;q++)
	{
		printf("%i - %f\n", q, stosunek[q]);
	}
	printf("Stosunek OK = %f\n", stosunekOK);
	
	for(int i=0;i<kw;i++)
	printf("%i", ktorywyraz[i]);
	*/
	return 0;
}
