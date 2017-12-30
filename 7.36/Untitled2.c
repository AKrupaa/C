/*
Zmodyfikuj funkcjê z zadania 7.33 tak, ¿eby dzia³a³a na liczbach rzeczywistych (float). 
Nazwij j¹ fclamp. Napisz program, który pobierze od u¿ytkownika liczby (nie wiêcej ni¿ 1000). 
Pojawienie siê wartoœci 0 na wejœciu bêdzie oznacza³o zakoñczenie ci¹gu. 
Program ma zast¹piæ wszystkie elementy ci¹gu, 
które s¹ mniejsze lub wiêksze od wartoœci œredniej o wiêcej ni¿ jedno odchylenie standardowe 
odpowiednio wartoœciami œrednia - odchylenie standardowe i œrednia + odchylenie standardowe. 
Wykorzystaj funkcje z zadania 7.35. Program ma wypisaæ wektor wyjœciowy z dok³adnoœci¹ do dwóch miejsc po przecinku.
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
	printf("Wprowadz ciag (max 1000) elementow. Zero oznacza zakoñczenie ci¹gu.\n");
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
