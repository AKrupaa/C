/* Wykorzystuj�c dwie p�tle, napisz program do automatycznego sprawdzania to�samo�ci
(a+b)(a-b)=a^2-b^2
Przyjmij zakres parametr�w a oraz b: -10 .. 10. Wy�wietl na ekranie list� par a i b, dla kt�rych podana to�samo�� jest spe�nion	*/

#include <stdio.h>

int main()
{
	int i,k;
	int lewa,prawa;
	for(i=-10;i<11;i++)
	{
		for(k=-10;k<11;k++)
		{
			lewa=(i+k)*(i-k);
			prawa=(i*i)-(k*k);
			
			if(lewa==prawa)
			{
			printf("Dla a=%d, b=%d tozsamosc jest prawdziwa\n",i,k);
			}
		}
	}	
	getchar();
	return 0;
}
