/*Dla tablicy z zadania 5.18 wyœwietl dodatkowo indeksy komórek, zawieraj¹cych wartoœci najmniejsze i najwiêksze tablicy. 
Zwróæ uwagê, ¿e ta sam¹ wartoœæ mo¿e byæ przechowywana w wielu komórkach.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Porgram wczytuje dowolna liczbe liczb calkowitych <1;1000> i wyznacza liczbe elementow, \n");
	printf("najmniejsza i najwieksza wartosc, srednia oraz iloczyn wszystkich elementow.\n");
	printf("Program konczy wczytywanie danych gdy napotka -1\n");
	
		const int max=1000;
        int tab[1000];
        int i=0, j, liczba=1;
        //i jest informacja o rozmiarze tablicy
       	int MIN_W,MAX_W;
		unsigned long long int ILOCZYN_W=1;
       	float SREDNIA;
		int suma=0;
		int n;
		
        printf("Podaj liczby oddzielone spacjami (max %d): ", max);
        scanf ("%d", &tab[i++]); // i++ pierw przypisze, potem zwiekszy o 1 wartosc w tablicy
        
        while(getchar()!='\n' && i<max && liczba!=-1)
        {
        	scanf("%d", &liczba);
        	if(liczba!=-1)
        	tab[i++]=liczba;
                //scanf("%d", &tab[i++]);
        }
        
        //wypisuje dane, bo tak
    //    for (j=0; j<i; j++)
    //    {
     //           printf("%d\n", tab[j]);
     //   }
        
        MIN_W=tab[0];
		MAX_W=tab[0];
        
        
        
        	for(int z=1;z<i;z++)
			{
				//minimalna wartosc
				if(MIN_W>tab[z])
				{
					MIN_W=tab[z];
				}
			}
			
			for(int x=1;x<i;x++)
			{
				//maksymalna wartosc
				if(MAX_W<tab[x])
				{
					MAX_W=tab[x];
				}
			}
			
			//srednia
		for(int c=0;c<i;c++)
		{
			
			suma+=tab[c];
			SREDNIA=(float)suma/i;
		}
		
		for(int v=0;v<i;v++)
		{
			ILOCZYN_W*=tab[v];
		}
	//wyœwietl dodatkowo indeksy komórek, zawieraj¹cych wartoœci najmniejsze i najwiêksze tablicy
	

	printf(" Minimalna wartosc= %d\n",MIN_W);
	printf(" Minimalna wartosc dla indeksow: ");
	int tabMIN[i];
	for(int a=0; a<i;a++)
	{
		if(MIN_W==tab[a])
		printf("%i ", a);
	}
	
	printf("\n Maksymalna wartosc= %d\n",MAX_W);
	printf(" Maksymalna wartosc dla indeksow: ");
	int tabMAX[i];
	for(int e=0; e<i;e++)
	{
		if(MAX_W==tab[e])
		printf("%i ", e);
	}


	printf("\n Iloczyn podanych liczb: %llu\n",ILOCZYN_W);  
	printf(" Srednia= %.2f",SREDNIA);
	
	
	
	getchar();
	return 0;
}
