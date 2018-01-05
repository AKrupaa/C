/*
Napisz program, kt�ry wczyta od u�ytkownika macierz o wymiarach 10�10. 
Program ma odnale�� we wczytanej macierzy najwi�ksz� liczb� parzyst�. 
Dla odnalezionej liczby program ma policzy� warto�� wyra�enia 
�suma wszystkich element�w w wierszu, gdzie ta liczba si� znajduje - suma wszystkich element�w w kolumnie, 
gdzie ta liczba si� znajduje�. 
Je�eli we wczytanej macierzy b�dzie wi�cej ni� jedna najwi�ksza liczba parzysta program ma policzy� to wyra�enie 
dla ka�dej z nich i wypisa� wynik w osobnych liniach. 
Na wyj�ciu maj� pojawi� si� indeksy kom�rki, w kt�rej zosta�a znaleziona szukana liczba (x y) i po spacji 
wynik obliczonego wyra�enia. Je�eli we wczytanej macierzy nie b�dzie liczb parzystych program ma wypisa� 0
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
