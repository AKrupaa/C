#include <stdio.h>
#include <stdlib.h>
/*Napisz program, który wczyta dowoln¹ liczbê liczb ca³kowitych od u¿ytkownika (nie mniej ni¿ jedn¹, nie wiêcej ni¿ 1000), 
jako jeden ci¹g liczb oddzielonych spacjami od siebie. Za³ó¿, ¿e wartoœæ -1 nie jest dan¹, a okreœleniem koñca danych. 
Nastêpnie wyznacz i wypisz (jako liczby, ka¿da w nowej linii): 
liczbê elementów tablicy, najmniejsz¹ i najwiêksz¹ wartoœæ, œredni¹ oraz iloczyn wszystkich elementów.*/
int main()
{
	printf("Program wczytuje dowolna liczbe liczb calkowitych <1;1000> i wyznacza liczbe elementow, \n");
	printf("najmniejsza i najwieksza wartosc, srednia oraz iloczyn wszystkich elementow.\n");
	printf("Program konczy wczytywanie danych gdy napotka -1\n");
	
		const int max=1000;
        int tab[max];
        int i=0, j, liczba=1;
        //i jest informacja o rozmiarze tablicy
       	int MIN_W,MAX_W,ILOCZYN_W=1;
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
       // for (j=0; j<i; j++)
      //  {
      //          printf("%d\n", tab[j]);
      //  }
        
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
	
	printf(" Minimalna wartosc= %d\n Maksymalna wartosc= %d\n Iloczyn podanych liczb: %d\n Srednia= %.2f", MIN_W,MAX_W,ILOCZYN_W,SREDNIA);
	
	
	
	getchar();
	return 0;
}
