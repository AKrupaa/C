/*Napisz program, który pobiera od u¿ytkownika 5 liczb zmiennoprzecinkowych. 
Dla podanych liczb znajdŸ wartoœæ maksymaln¹, minimaln¹ oraz œredni¹, a nastêpnie, 
w kolejnych wierszach, wyœwietl wartoœæ najmniejsz¹, najwiêksz¹ oraz wartoœæ œredni¹ 
(z dok³adnoœci¹ do dwóch miejsc po przecinku).*/

#include <stdio.h>
#include <conio.h>
int main()
{
	float a, b, c, d, e, f;
	printf("Podaj piec liczb: \n");
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	scanf("%f", &d);
	scanf("%f", &e);

	float min, sr, max;

	max = a;
	if (max < b)
	{
		max = b;
	}
	if (max < c)
	{
		max = c;
	}
	if (max < d)
	{
		max = d;
	}
	if (max < e)
	{
		max = e;
	}

	min = a;
	if (min > b)
	{
		min = b;
	}
	if (min > c)
	{
		min = c;
	}
	if (min > d)
	{
		min = d;
	}
	if (min > e)
	{
		min = e;
	}
	printf("MIN = %.2f\n", min);
	printf("MAX = %.2f\n", max);
	sr = (a + b + c + d + e) / 5;
	printf("Srednia = %.2f", sr);
	getch();
	return 0;
}