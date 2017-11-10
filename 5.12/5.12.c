#include <stdio.h>
/*
Napisz program pobieraj¹cy od u¿ytkownika 10 wartoœci i zapisuj¹cy je w tablicy. 
Po pobraniu wartoœci, wyznacz i wyœwietl na ekranie ich œredni¹ oraz wartoœæ najmniejsz¹ i najwiêksza. 
Uwaga: operacja pobierania wartoœci, wyznaczania œredniej, minimalnej oraz maksymalnej nie mog¹ byæ realizowane w tej samej pêtli. 
Ka¿da operacja powinna mieæ w³asn¹, oddzieln¹ pêtlê (razem minimum 4 pêtle).
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
