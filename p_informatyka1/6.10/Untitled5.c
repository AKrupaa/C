/*
Napisz program, który wczyta od u¿ytkownika macierz o wymiarach 10×10. 
Program ma odnaleŸæ we wczytanej macierzy najwiêksz¹ liczbê parzyst¹. 
Dla odnalezionej liczby program ma policzyæ wartoœæ wyra¿enia 
“suma wszystkich elementów w wierszu, gdzie ta liczba siê znajduje - suma wszystkich elementów w kolumnie, 
gdzie ta liczba siê znajduje”. 
Je¿eli we wczytanej macierzy bêdzie wiêcej ni¿ jedna najwiêksza liczba parzysta program ma policzyæ to wyra¿enie 
dla ka¿dej z nich i wypisaæ wynik w osobnych liniach. 
Na wyjœciu maj¹ pojawiæ siê indeksy komórki, w której zosta³a znaleziona szukana liczba (x y) i po spacji 
wynik obliczonego wyra¿enia. Je¿eli we wczytanej macierzy nie bêdzie liczb parzystych program ma wypisaæ 0
*/
#include <stdio.h>
#define SIZE 10

int main()
{
	int liczba;
	int ile;
	int najwieksza;
	int sumaW=0;
	int sumaK=0;
	int tab[10][10];
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			scanf("%i", &liczba);
			tab[i][j]=liczba;
		}
	}

	//znajdz: najwieksza parzysta liczba
	najwieksza=-99999;
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			if(tab[i][j]%2==0&&najwieksza<tab[i][j])
			najwieksza=tab[i][j];
		}
	}
	//ile jest 'najwiekszych' liczb?
	ile=0;
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			if(tab[i][j]==najwieksza)
			ile++;
		}
	}
	//ile>0
	if(ile==0)
	printf("0");
	else
	{
		for(int i=0;i<SIZE;i++)
		{
			for(int j=0;j<SIZE;j++)
			{
				if(tab[i][j]==najwieksza)
				{
					printf("(%i,%i) ",j,i); //(x,y) czyli kolumna,wiersz
					for(int k=0;k<SIZE;k++)
					{
							sumaW+=tab[i][k];
					}
					for(int l=0;l<SIZE;l++)
					{
							sumaK+=tab[l][j];
					}
					printf("%i\n",sumaW-sumaK);
					sumaW=0;
					sumaK=0;
				}
			}
		}
	}
	
	return 0;

}
