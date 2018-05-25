/*
Napisaæ w³asny odpowiednik funkcji strcpy() z pliku nag³ówkowego
<string.h> Do przemieszczania siê po kolejnych elementach tablicy
wykorzystaæ wskaŸniki. 
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void strcopy(char *kopia, char *oryg)
{
	int i;
	char ch;
	for(i=0;;i++)
	{
		ch=*(oryg+i);
		if(ch=='\0') break;
		*(kopia+i)=ch;
	}
}

int main()
{
	char tab[10];	//oryginal
	char *wtab;
	wtab=tab;
	
	char tab2[10];	//kopia
	char *wtab2;
	wtab2=tab2;
	
	char literka;
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%c",&literka);
		*(tab+i)=literka;
	}
	
	printf("\nORYGINAL\n");
	for(i=0;i<10;i++)
	printf("%c", *(tab+i));

	
	strcopy(wtab2,wtab);
	
	printf("\n\nKOPIA\n");
	for(i=0;i<10;i++)
	printf("%c", *(wtab2+i));
	
	return 0;
}
