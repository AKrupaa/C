/*
Napisz program, kt�ry pobierze od u�ytkownika liczby (nie wi�cej ni� 1000), 
pojawienie si� warto�ci 0 na wej�ciu b�dzie oznacza�o zako�czenie ci�gu. 
Dla wczytanego ci�gu program ma policzy� warto�� �redni� i odchylenie standardowe, 
a nast�pnie wypisa� je w dw�ch kolejnych liniach z dok�adno�ci� dw�ch miejsc po przecinku.
Napisz funkcje obliczaj�ce warto�� �redni� oraz odchylenie standardowe dla wszystkich element�w tablicy jednowymiarowej. 
Do obliczenia odchylenia standardowego nale�y przyj�� wz�r dla ca�ej populacji. 
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
	printf("Wprowadz ciag (max 1000) elementow. Zero oznacza zako�czenie ci�gu.\n");
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
