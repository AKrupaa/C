/*Rozbuduj zadanie 2.13 tak, aby wprowadzenie warto�ci -1 przez u�ytkownika przerywa�o pobieranie warto�ci. 
Dla podanych do tej pory liczb (wy��czaj�c -1) 
znajd� warto�� maksymaln�, minimaln� oraz �redni�, a nast�pnie, 
w kolejnych wierszach, wy�wietl warto�� najmniejsz�, najwi�ksz� oraz warto�� �redni� 
(z dok�adno�ci� do dw�ch miejsc po przecinku).*/


#include <stdio.h>
#include <conio.h>
int main()
{
	float a, b, c, d, e;
	float min, sr, max;
	printf("Podaj piec liczb: \n");
	scanf("%f", &a);
	if (a == -1)
	{
		printf("Brak danych."); // Dla podanych do tej pory liczb(wy��czaj�c - 1) a=-1 wiec pomijam :-)
	}
	else
	{
		min = a;	// dla jednego argumentu min oraz max <TUTAJ>
		max = a;
		scanf("%f", &b);
		if (b == -1)
		{
			//przepis na min max sr -> a;
			sr = a / 1;
		}
		else
		{
			scanf("%f", &c);
			if (c == -1)
			{
				//przepis na min max sr -> a oraz b
				min = a; max = a;
				if (min > b) min = b;
				if (max < b) max = b;
				sr = (a + b) / 2;
			}
			else
			{
				scanf("%f", &d);
				if (d == -1)
				{
					//przepis na min max sr -> a,b,c
					min = a; max = a;
					if (min > b) min = b;
					if (min > c) min = c;
					if (max < b) max = b;
					if (max < c) max = c;
					sr = (a + b + c) / 3;

				}
				else
				{
					scanf("%f", &e);
					if (e == -1)
					{
						//przepis na min max sr -> a,b,c,d
						min = a; max = a;
						if (min > b) min = b;
						if (min > c) min = c;
						if (min > d) min = d;
						if (max < b) max = b;
						if (max < c) max = c;
						if (max < d) max = d;
						sr = (a + b + c + d) / 4;
					}
					else
					{
						//przepis na min max sr -> a,b,c,d,e
						min = a; max = a;
						if (min > b) min = b;
						if (min > c) min = c;
						if (min > d) min = d;
						if (min > e) min = e;
						if (max < b) max = b;
						if (max < c) max = c;
						if (max < d) max = d;
						if (max < e) max = e;
						sr = (a + b + c + d + e) / 5;
					}
				}
			}
		}
	}
	
	if (a != -1)
	{
		printf("MIN = %.2f\n", min);
		printf("MAX = %.2f\n", max);
		printf("Srednia = %.2f", sr);
	}

	_getch();
	return 0;
}
