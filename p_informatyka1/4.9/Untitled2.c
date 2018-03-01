/* Wykorzystuj¹c dwie pêtle, napisz program do automatycznego sprawdzania to¿samoœci
(a+b)(a-b)=a^2-b^2
Przyjmij zakres parametrów a oraz b: -10 .. 10. Wyœwietl na ekranie listê par a i b, dla których podana to¿samoœæ jest spe³nion	*/

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
