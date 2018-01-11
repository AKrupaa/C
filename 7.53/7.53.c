#include <stdio.h>
#define MAX 150

// do³¹czaj¹c¹ pierwszy wektor na pocz¹tku drugiego
int concat_begin(int first[], int size, int second[], int size2, int dest[], int size3)
{
	//tablica3 MAX 150 elementow wiec te dwie nie moga miec wiec suma 2 tablic <150
	if(size+size2>size3)
	{
		return -1;
	}
	else
	{
		int licznik=0;//rozmiar 3 tablicy
		for(int i=0;i<size;i++)
		{
			dest[licznik++]=first[i];
		}
		for(int i=0;i<size2;i++)
		{
			dest[licznik++]=second[i];
		}
		return licznik;
	}
}
//do³¹czaj¹cej pierwszy wektor na koniec drugiego 
int concat_end(int first[], int size, int second[], int size2, int dest[], int size3)
{
	if(size+size2>size3)
	{
		return -1;
	}
	else
	{
		int licznik=0;//rozmiar 3 tablicy
		for(int i=0;i<size2;i++)
		{
			dest[licznik++]=second[i];
		}
		for(int i=0;i<size;i++)
		{
			dest[licznik++]=first[i];
		}
		return licznik;
	}
}
//³¹cz¹cej na zmianê elementy obu wektorów, rozpoczynaj¹c od pierwszego elementu pierwszego wektora 
int concat_zip(int first[], int size, int second[], int size2, int dest[], int size3)
{
	if(size+size2>size3)
	{
		return -1;
	}
	else
	{
	//	dest[0]=first[0];
	//	dest[1]=second[0];
	//	dest[2]=first[1];
	//	dest[3]=second[1];
		int licznik=0;
		for(int i=0;i<size+size2;i++)
		{
			if(i<size)
			{
				dest[licznik++]=first[i];
			}
			if(i<size2)
			{
				dest[licznik++]=second[i];
			}
		}
		return licznik;
	}
}
int read_vector(int vec[], int size, int stop_value)
{
	int i=0;
	int liczba;
	for(i=0;i<size;i++)
	{
		scanf("%i",&liczba);
		if(liczba==stop_value)
		break;
		else
		vec[i]=liczba;
		
	}
	return i;
}
void display_vector(int vec[], int size)
{
	for(int i=0;i<size;i++)
	printf("%i ",vec[i]);
	
	printf("\n");
}


int main()
{
	int tab1[MAX];
	int tab2[MAX];
	int tab3[MAX];
	printf("podaj pierwszy wektor: ");
	int sizetab1=read_vector(tab1,MAX,0);//zwraca dlugosc elementow w wektorze wyjsciowym
	printf("podaj pierwszy wektor: ");
	int sizetab2=read_vector(tab2,MAX,0);//zwraca dlugosc elementow w wektorze wyjsciowym
	
	display_vector(tab1,sizetab1);
	display_vector(tab2,sizetab2);
	
	int sizetab3;
	sizetab3=concat_begin(tab1, sizetab1, tab2, sizetab2, tab3, MAX); //zwraca dlugosc elementow...
	display_vector(tab3,sizetab3);
	
	sizetab3=concat_end(tab1, sizetab1, tab2, sizetab2, tab3, MAX);	//zwraca dlugosc elementow...
	display_vector(tab3,sizetab3);
	
	sizetab3=concat_zip(tab1, sizetab1, tab2, sizetab2, tab3, MAX);
	display_vector(tab3,sizetab3);
	return 0;
}
