/*
Wykonaj tablicowanie funkcji sin(x) z krokiem PI/100 w zakresie 0-2PI. 
Utwórz tablice o zadanej liczbie wierszy i dwóch kolumnach. 
W pierwszej kolumnie umiesc wartosc argumentu x, a w drugiej wartosc funkcji sin(x). 
Wartosc argumentu x zwiekszaj od 0 o zadany krok. Liczbe wierszy okresl na podstawie szerokosci zakresu i kroku tablicowania. 
Wartosci z wygenerowanej tablicy wyswietl na ekranie, podajac wartosc x oraz wartosc funkcji z dokladnoscia do 4 miejsc po przecinku.
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int krok=0;
	float M_PI=3.14;
	float ile=0;
	float tab[20][10];
	for(int x=0;x<20;x++)
	{
		for(int y=0;y<10;y++)
		{
			if(ile<2*M_PI)
			{
				tab[x][y]=sin(ile);
				ile+=M_PI/100;
				krok++;
			//	printf("krok: %i", krok);
				
			}
		}	
	}
		
	for(int x=0;x<20;x++)
	{
		for(int y=0;y<10;y++)
		{
			printf("%-10.4f|", tab[x][y]);
		}	
		printf("\n");
	}
	

	return 0;
}
