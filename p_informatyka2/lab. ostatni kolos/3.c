#include <stdio.h>
#include <math.h>

struct Point
{
	float x1;
	float y1;
	float x2;
	float y2;
};


int main()
{
	struct Point odl;
	struct Point *a;
	a=&odl;
	
	printf("Podaj x1,y1: ");
	scanf("%f", &a->x1);
	scanf("%f", &a->y1);
	
	printf("Podaj x2,y2: ");
	scanf("%f", &a->x2);
	scanf("%f", &a->y2);
	
	float wynik=sqrt((a->x1 - a->x2)*(a->x1 - a->x2)+ (a->y1 - a->y2)*(a->y1 - a->y2));
	printf("Wynik = %f", wynik);
		
	return 0;
}
