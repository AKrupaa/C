#include <stdio.h>
/*
Napisz program pobieraj�cy od u�ytkownika 10 warto�ci i zapisuj�cy je w tablicy. 
Po pobraniu warto�ci, wyznacz i wy�wietl na ekranie ich �redni� oraz warto�� najmniejsz� i najwi�ksza. 
Uwaga: operacja pobierania warto�ci, wyznaczania �redniej, minimalnej oraz maksymalnej nie mog� by� realizowane w tej samej p�tli. 
Ka�da operacja powinna mie� w�asn�, oddzieln� p�tl� (razem minimum 4 p�tle).
*/
int main()
{
	printf("Program wyznacza i wyswietla srednia, wartosc najmniejsza i najwieksza 10 wartosci.\n");
	float tab[10];
	float liczba;
	float min,max,sr;
	float suma=0;
	for(int i=0;i<10;i++)
	{
		printf("Wprowadz %i. liczbe: ",i+1);
		scanf("%f",&liczba);
		tab[i]=liczba;
	}
	min=tab[0];
	max=tab[0];
	for(int j=1;j<10;j++)
	{
		//minimalna wartosc
		if(min>tab[j])
		{
			min=tab[j];
		}
	}
		for(int k=1;k<10;k++)
	{
		//maksymalna wartosc
		if(max<tab[k])
		{
			max=tab[k];
		}
	}
	
		//srednia
		for(int l=0;l<10;l++)
	{
		
		suma+=tab[l];
		sr=suma/10;
	}
	
	printf(" Minimalna wartosc= %i\n Maksymalna wartosc= %i\n Iloczyn podanych liczb: %i/n Srednia= %i", min,max,sr);
	
	getchar();
	return 0;
}
