/*
Napisz program, kt�ry wczyta od u�ytkownika macierz o wymiarze 10�10. 
Program ma odnale�� we wczytanej macierzy 3 elementowy wektor, o najwi�kszej sumie jego element�w. 
Wektor mo�e by� pionowy lub poziomy. 
Na wyj�ciu ma si� pojawi� maksymalna suma 3 elementowego wektora, liczba odnalezionych wektor�w o takiej sumie, 
a nast�pnie maj� si� pojawi� dla ka�dego wektora w osobnej linii: oznaczenie po�o�enia wektora (1 - pionowo, 2 - poziomo) 
oraz po spacji indeksy pierwszej kom�rki (x y).
*/

#include <stdio.h>
#define SIZE 10

int main()
{
	
	printf("podaj liczby: \n");
	int tab[10][10];
	int liczba;
	int suma=0;
	int sumaPOZIOM;
	int sumaPION;
	int sumaN;
	int ileP=0;
	int wspolrzednepoziom[31];
	int wspolrzednepion[31];
	int x=0;
	int y=0;
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			scanf("%i",&liczba);
			tab[i][j]=liczba;
		}
	}
		
		//szukam 3 liczb ktorych suma bd najwieksza w POZIOMIE
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE-3;j++)
		{
			suma=0;
			if(j==0&&i==0)
				sumaPOZIOM=tab[i][j];
	
		for(int q=0;q<3;q++)
			suma+=tab[i][j+q];
			
			if(sumaPOZIOM<suma)
			sumaPOZIOM=suma;
		}
	}
	printf("SUMA POZIOM = %i\n",sumaPOZIOM);
		//szukam 3 liczb ktorych suma bd najwieksza w PIONIE
	for(int i=0;i<SIZE;i++)
	{
		
		for(int j=0;j<SIZE-3;j++)
		{
			suma=0;
				if(j==0&&i==0)
				sumaPION=tab[i][j];
				
				for(int q=0;q<3;q++)
				suma+=tab[j+q][i];
				
				
				if(sumaPION<suma)
				sumaPION=suma;
		}	
	}	
		printf("SUMA PION = %i\n",sumaPION);
	
	if(sumaPOZIOM<sumaPION)
	sumaN=sumaPION;
	else
	sumaN=sumaPOZIOM;
	
	
		//ile tego jest w poziomie?
	for(int i=0;i<SIZE;i++)
	{
		
		for(int j=0;j<SIZE-3;j++)
		{
			suma=0;
				for(int q=0;q<3;q++)
				suma+=tab[i][j+q];
				
				
			if(sumaN==suma)
			{
				ileP++;
				wspolrzednepoziom[x++]=j;
				wspolrzednepoziom[x++]=i;
			}
		}
	}
	
		//ile tego jest w pionie?
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE-3;j++)
		{
		suma=0;
			for(int q=0;q<3;q++)
				suma+=tab[j+q][i];
				
			if(sumaN==suma)
			{
				ileP++;
				wspolrzednepion[y++]=j;
				wspolrzednepion[y++]=i;
			}
		}
	}
		
		for(int i=0;i<SIZE;i++)
		{
			for(int j=0;j<SIZE;j++)
			{
				printf("%4i ", tab[i][j]);
			}
			printf("\n");
		}
		
		printf("%i\n%i\n", sumaN, ileP);
		
		if(y>0)
		{
			printf("1 ");
			for(int i=0;i<y;i++)
			printf("%i ",wspolrzednepion[i]);
		}
		if(x>0)
		{
			printf("2 ");
			for(int i=0;i<x;i++)
				printf("%i ",wspolrzednepoziom[i]);
		}
		
		
		
		
	return 0;
}
