#include <stdio.h>
#include <math.h>

int main()
{
	printf("wprowadz a, b ,c:\n");
	float a,b,c;
	float *wa;
	float *wb;
	float *wc;
	int x;
	
	wa=&a;
	wb=&b;
	wc=&c;
	
	x=scanf("%f %f %f",wa,wb,wc);
	if(x!=3) return 0;
	if(*wa==0) return 0;


	if(*wb * *wb -4* *wa * *wc<0)	return 0;
	
	if( (*wb * *wb) - 4*(*wa * *wc)==0)
	{
		printf("%f", (-(*wb))/(2* *wa));
	}
	
	if( (*wb * *wb) - 4*(*wa * *wc)>0)
	{
		printf("x1=%f\n", ((-(*wb)-sqrt((*wb * *wb) - 4*(*wa * *wc))))/(2* *wa));
		printf("x2=%f", ((-(*wb)+sqrt((*wb * *wb) - 4*(*wa * *wc))))/(2* *wa));
	}
	
	return 0;
}
