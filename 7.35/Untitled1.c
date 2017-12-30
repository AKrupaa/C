/*
Napisz program, który pobierze od u¿ytkownika liczby (nie wiêcej ni¿ 1000), 
pojawienie siê wartoœci 0 na wejœciu bêdzie oznacza³o zakoñczenie ci¹gu. 
Dla wczytanego ci¹gu program ma policzyæ wartoœæ œredni¹ i odchylenie standardowe, 
a nastêpnie wypisaæ je w dwóch kolejnych liniach z dok³adnoœci¹ dwóch miejsc po przecinku.
Napisz funkcje obliczaj¹ce wartoœæ œredni¹ oraz odchylenie standardowe dla wszystkich elementów tablicy jednowymiarowej. 
Do obliczenia odchylenia standardowego nale¿y przyj¹æ wzór dla ca³ej populacji. 
*/

#include <stdio.h>
#include <math.h>
#define SIZE 1000


float average(int tab[], int size)
{
	int suma=0;
	for(int i=0;i<size;i++)
	{
		suma+=tab[i];
	}
	
	float srednia;
	srednia=(float)suma/size;
	
	return srednia;
}

float std_deviation(int tab[], int size)
{
	float wariancjalicznik=0;
	for(int w=0;w<size;w++)
	{
		wariancjalicznik+=pow((tab[w]-(average(tab,size))),2);
	}
	float wariancja2=(float)wariancjalicznik/size;
	float odchylenie=sqrt(wariancja2);
	
	return odchylenie;
}

int main()
{
	int liczba;
	int tab[SIZE];
	int i=0;
	printf("Wprowadz ciag (max 1000) elementow. Zero oznacza zakoñczenie ci¹gu.\n");
	scanf("%i",&liczba);
	if(liczba!=0)
	tab[i++]=liczba;
	else
	{
		printf("wprowadzono 0 na poczatku - wyjscie z programu"); return 0;
	}
	while(liczba!=0&&i<SIZE)
	{
		scanf("%i",&liczba);
		if(liczba!=0)
		tab[i++]=liczba;
	}
	
	printf("Srednia= %.2f\n", average(tab,i));
	printf("Odchylenie std= %.2f", std_deviation(tab,i));
	return 0;
}
