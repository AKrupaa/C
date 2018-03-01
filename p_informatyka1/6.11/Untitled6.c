/*
Napisz program, który wczyta od u¿ytkownika macierz o wymiarze 10×10, 
nastêpnie policzy d³ugoœæ boków trójk¹ta, którego punkty wyznaczone s¹ przez 
wspó³rzêdne komórek z wartoœci¹ minimaln¹, maksymaln¹ i najbardziej zbli¿on¹ do œredniej. 
Je¿eli bêdzie wiêcej ni¿ jeden punkt z wartoœciami min, max i œredni¹ to program ma zwróciæ b³¹d. 
W przeciwnym wypadku w jednej linii program ma wypisaæ, po spacjach, d³ugoœci boków trójk¹ta 
(z dok³adnoœci¹ do 2 miejsc po przecinku).
*/
#include <stdio.h>
#include <math.h>
#define SIZE 10

int main()
{
	int liczba;
	int ileW;
	int ileM;
	int ileS;
	int najwieksza;
	int najmniejsza;
	int licznik=0;
	int srednia;
	int xW, yW, xM, yM, xS, yS;
	int tab[10][10];
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			scanf("%i", &liczba);
			tab[i][j]=liczba;
		}
	}
	//znajdz: najwieksza liczbe
	najwieksza=-99999;
	najmniejsza=99999;
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			licznik+=tab[i][j];
			if(najwieksza<tab[i][j])
			najwieksza=tab[i][j];
			if(najmniejsza>tab[i][j])
			najmniejsza=tab[i][j];
		}
	}
	//ile tego jest?
	ileM=0;
	ileW=0;
	ileS=0;
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			if(tab[i][j]==najwieksza)
			{
				ileW++;
				if(ileW>1)
				{
					printf("blad"); return 0;
				}
				if(ileW==1)
				{
					xW=j;
					yW=i;
				}
			}
			if(tab[i][j]==najmniejsza)
			{
				ileM++;
				if(ileM>1)
				{
					printf("blad"); return 0;
				}
				else
				{
					xM=j;
					yM=i;
				}
			}
			if(srednia<tab[i][j]+2&&srednia>tab[i][j]-2)
			{
				ileS++;
				if(ileS>1)
				{
					printf("blad"); return 0;
				}
				else
				{
					xS=j;
					yS=i;
				}
			}
		}
	}
	//dlugosci bokow:
		//najw i najm, najw i sredni, najm i sredni
	printf("\n\n%.2f ", sqrt((pow((xM-xW),2))+(pow((yM-yW),2))));
	printf("%.2f ", sqrt((pow((xS-xW),2))+(pow((yS-yW),2))));
	printf("%.2f ", sqrt((pow((xS-xM),2))+(pow((yS-yM),2))));
	return 0;
}
