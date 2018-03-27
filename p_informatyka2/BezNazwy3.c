#include <stdio.h>
#define MAX 100

int main()
{
	//uzytkownik wpisuje zdanie, wpisuje to zdanie az do 0. wtedy jest koniec;
	
	char tab[100];
	int i;
	char *wtab;
	wtab=tab;
	char temp;
	int czy;
	int licznik=0;
	

	
	for(i=0;i<100&&temp!='0';i++)
	{
		czy=scanf("%c",&temp);
		if(czy)
		{
			if(temp!='0')
			{
				*(tab+i)=temp;
				licznik++;
			}
			
		}
	}
		

	
	//'koniec' konczy ciag
	char tab2[6]={'k','o','n','i','e','c'};

	char *wtab1;
	char *wtab2;
	wtab1=tab;
	wtab2=tab2;
	
	int j;
	int istnieje=0;
	int indeks;
	for(i=0;i<MAX&&istnieje==0;i++)
	{
//		printf("\nMOJE i w tej chwili : %i \n", i);
		if( *(wtab1+i) == 'k')
		{
			printf("\nMOJE i w tej chwili : %i \n", i);
			indeks=i;
			printf("\nINDEKS = %i\n", indeks);
			int ile=0;
			int koniec=0;
			for(j=0;j<6;j++)
			{
				if(*(wtab1+i+j)==*(wtab2+j))
				ile++;
				printf("\n%i\n",koniec);
			}
			
			if(ile==6)	istnieje=1;
		
		}
	}
	
	int max=0;
	if(istnieje)
	{
		printf("\nwystapil ''koniec'' !\n");
		max=indeks;	
	}
	
	for(i=0;i<indeks;i++)
	printf("%c",*(wtab1+i));

	
	
	
	

//ile bajtow tej tablicy int
//porownac sizeof getsize
	

	
	
	return 0;
}
