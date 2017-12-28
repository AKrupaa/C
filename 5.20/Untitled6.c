/*Napisz program, który pobierze od u¿ytkownika liczby z zakresu <0 - 10>, 
a nastêpnie wypisze w osobnych liniach, ile razy ka¿da z tych liczb pojawi³a siê na wejœciu. 
Ka¿da linia ma mieæ nastêpuj¹cy format: liczba - iloœæ wyst¹pieñ. 
Przed i po myœlniku ma siê pojawiæ dok³adnie jedna spacja. Pojawienie siê wartoœci -1 na wejœciu bêdzie oznacza³o zakoñczenie ci¹gu.*/

#include <stdio.h>

int main()
{
		const int max=1000;
        int tab[1000];
        int liczba=4;
        int i=0;
        //i jest informacja o rozmiarze tablicy
		printf("Program konczy wczytywanie danych gdy napotka -1\n");
		printf("Zakres dzialania programu wystepuje dla liczb nalezacych do przedzialu <0;10>\n");
        printf("Podaj liczby oddzielone spacjami (max %d): ", max);
        scanf("%d", &liczba);
        	if(liczba!=-1)
			{
        		if(liczba>=0&&liczba<11)
        		tab[i++]=liczba;
			}
        	else 
			{
        		printf("Wpisano -1 na samym poczatku. Nastepuje wyjscie z programu."); 
				return 0;
			}
			if(liczba<0&&liczba>10)
			;
     //   scanf ("%d", &tab[i++]); // i++ pierw przypisze, potem zwiekszy o 1 wartosc w tablicy
        // wczytanie liczb po spacji, -1 przerywa dzialanie
        while(i<max && liczba!=-1)
        {
        	scanf("%d", &liczba);
        	if(liczba!=-1&&liczba>=0&&liczba<11)
        	tab[i++]=liczba;
                //scanf("%d", &tab[i++]);
        }
        //ile razy ka¿da z tych liczb pojawi³a siê na wejœciu. 
		//Ka¿da linia ma mieæ nastêpuj¹cy format: liczba - iloœæ wyst¹pieñ. 
        int suma;
        int w;
        int q;
        int temp;
        //sortowanie tablicy
		for(int j=0;j<i;j++)
		{
			for(int k=0;k<i-1;k++)
			{
				if(tab[k]>tab[k+1])
				{
					temp=tab[k];
					tab[k]=tab[k+1];
					tab[k+1]=temp;
				}
			}
		}
 
    //Posortowane
 // for(int t=0; t<i; t++) printf("%d\n", tab[t]); //czy posortowalo?
        
        printf("Wzor: Wpisana liczba - Liczba wystapien\n");
        tab[-1]=14; //inaczej nie dzia³a dla zera, brak innego pomys³u...
        for(q=0;q<i;q++)
        {						//czy liczba na pozycji 1 byla tez na 4? jak to sprawdzic.
        if(tab[q]!=tab[q-1]) //dziala tylko na poprzednie liczby... 					
        	{				//jak posegregowac tablice? od najmniejszej do najwiekszej wartosci a potem uzyc if(tab[q]!=tab[q-1]) hehe
			
        		suma=0;
        		for(w=0;w<i;w++)
        		{
					if(tab[q]==tab[w])
	        		{
	        			suma+=1;
					}
				}
			        printf("%i - %i\n", tab[q], suma);
			}
		}
        	

	getchar();
	return 0;
}
