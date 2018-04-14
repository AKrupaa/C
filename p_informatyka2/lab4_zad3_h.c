//2 funkcje
/*
1->pole prostokat.
2->objetosc f.1;
*/

#include <stdio.h>

float pole_p(float *a, float *b);

typedef float( * dzialanieT )( float, float );


float objetosc( float *a, float *b, float *h, dzialanieT pDzialanie );
float objetoscBezDefinicji( float *a, float *b, float *h, float( * pDzialanie )( float, float ) );


int main()
{
	float a,b,h;
	float *wa, *wb, *wh;

	printf("Podaj wartosci: a, b, h:\n");
	scanf("%f %f %f", &a,&b,&h);
	
	wa=&a;
	wb=&b;
	wh=&h;
	
	
	printf("Objetosc = %f\n", objetosc( wa, wb, wh, pole_p ));
	printf("ObjetoscBezDefinicji = %f\n", objetoscBezDefinicji( wa, wb, wh, pole_p ));
	
	return 0;
}

float pole_p(float *a, float *b)
{
	return (*a * *b);
}

float objetosc( float *a, float *b, float *h, dzialanieT pDzialanie )
{
	return (pDzialanie(*a,*b)* *h);
}


float objetoscBezDefinicji( float *a, float *b, float *h, float( * pDzialanie )( float, float ) )
{
	return (pDzialanie(*a,*b)* *h);
}
