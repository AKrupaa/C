//2 funkcje
/*
1->pole prostokat.
2->objetosc f.1;
*/

#include <stdio.h>

float pole(float *wx, float *wy)
{
	return (*wx * *wy);
}

float obj(float *wwh, float *wwx, float *wwy, float (*wsk)(float, float))
{
	

	return ((*wsk)(*wwx,*wwy) * *wwh);
}



int main()
{
	//http://cpp0x.pl/kursy/Kurs-C++/Poziom-X/Wskaznik-na-funkcje/249
	float a,b,h;
	float *wa,*wb,*wh;
	wa=&a;
	wb=&b;
	wh=&h;
	float (*wsk)(float, float);
	wsk = pole;
	
	printf("Podaj parametry: AxBxH:\n");
	int x=scanf("%f %f %f",wa,wb,wh);
	if(x!=3) return 0;
	
	printf("%f", obj(wh,wa,wb, wsk));
	
	return 0;
}
