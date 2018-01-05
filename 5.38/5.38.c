/*
Napisz program, kt�ry pobierze od u�ytkownika liczby (nie wi�cej ni� 1000), 
a nast�pnie wypisze warto�ci wszystkich element�w, 
kt�rych warto�� jest oddalona od �redniej warto�ci element�w ci�gu o wi�cej ni� o warto�� odchylenia standardowego tego ci�gu. 
Elementy maj� by� wypisane po spacji. 
Pojawienie si� warto�ci 0 na wej�ciu b�dzie oznacza�o zako�czenie ci�gu. 
Do obliczenia odchylenia standardowego przyj�� wz�r dla ca�ej populacji.
*/

#include <stdio.h>
#include <math.h>

int main()
{
	const int max=1000;
	int tab[1000];
	int liczba;
	int i=0;
	printf("Wprowadzenie wartosci 0 (zero) oznacza zakonczenie ciagu!\n");
	printf("Wprowadz (max %i) elementow ciagu: \n",max);
	scanf("%i",&liczba);
	if(liczba!=0)
	{
		tab[i++]=liczba;
	}
	else
	{
		printf("Wprowadzono 0 (zero) na poczatku! Nastepuje wyjscie z programu."); return 0;
	}
	while(liczba!=0&&i<max)
	{
		scanf("%i",&liczba);
		if(liczba!=0)
		tab[i++]=liczba;
	}
	//srednia wartosc elementow ciagu
	float srednia;
	int suma=0;
	for(int q=0;q<i;q++)
	{
		suma+=tab[q];
	}
	srednia=(float)(suma)/(i);
	//printf("srednia = %f\n", srednia);
	//wariancja
	float wariancjalicznik=0;
	
	for(int w=0;w<i;w++)
	{
		wariancjalicznik+=pow((tab[w]-srednia),2);
	}
	float wariancja2=(float)wariancjalicznik/i;
	float odchylenie=sqrt(wariancja2);
	
	//printf("Odchylenie= %f", odchylenie);
	
	//srednia, odchylenie jest.
	int zsrednia= (int)srednia;
	int indeks;
	for(int e=0;e<i;e++)
	{
		if(tab[e]==zsrednia)
		indeks=e;
	}
	
	for(int r=0; r<indeks-odchylenie;r++)
	printf("%i ",tab[r]);
	
	int ktory=indeks+odchylenie;
	for(ktory;ktory<i;ktory++)
	printf("%i ",tab[ktory]);
	
	getchar();
	return 0;
}
