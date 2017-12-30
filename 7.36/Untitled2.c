/*
Zmodyfikuj funkcj� z zadania 7.33 tak, �eby dzia�a�a na liczbach rzeczywistych (float). 
Nazwij j� fclamp. Napisz program, kt�ry pobierze od u�ytkownika liczby (nie wi�cej ni� 1000). 
Pojawienie si� warto�ci 0 na wej�ciu b�dzie oznacza�o zako�czenie ci�gu. 
Program ma zast�pi� wszystkie elementy ci�gu, 
kt�re s� mniejsze lub wi�ksze od warto�ci �redniej o wi�cej ni� jedno odchylenie standardowe 
odpowiednio warto�ciami �rednia - odchylenie standardowe i �rednia + odchylenie standardowe. 
Wykorzystaj funkcje z zadania 7.35. Program ma wypisa� wektor wyj�ciowy z dok�adno�ci� do dw�ch miejsc po przecinku.
*/


#include <stdio.h>
#include <math.h>
#define SIZE 1000

float average(float tab[], int size)
{
	float suma=0;
	for(int i=0;i<size;i++)
	{
		suma+=tab[i];
	}
	
	float srednia;
	srednia=(float)suma/size;
	
	return srednia;
}

float std_deviation(float tab[], int size)
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

float fclamp(float v, float lo, float hi)
{
	if(v>=lo&&v<=hi)
	{
		return v;
	}
	
	if(v<lo)
	{
		return lo;
	}
	
	if(v>hi)
	{
		return hi;
	}
}

int main()
{	
//wczytanie 1000 liczb	
	float liczba;
	float tab[SIZE];
	int i=0;
	printf("Wprowadz ciag (max 1000) elementow. Zero oznacza zako�czenie ci�gu.\n");
	scanf("%f",&liczba);
	if(liczba!=0)
	tab[i++]=liczba;
	else
	{
		printf("wprowadzono 0 na poczatku - wyjscie z programu"); return 0;
	}
	while(liczba!=0&&i<SIZE)
	{
		scanf("%f",&liczba);
		if(liczba!=0)
		tab[i++]=liczba;
	}
	
	float dolnag=average(tab,i)-std_deviation(tab,i);
	float gornag=average(tab,i)+std_deviation(tab,i);
	
	for(int q=0;q<i;q++)
	{
		liczba=tab[q];
		tab[q]=fclamp(liczba,dolnag,gornag);
	}
	
	for(int q=0;q<i;q++)
	{
		printf("%.2f ",tab[q]);
	}
	
	return 0;
}
