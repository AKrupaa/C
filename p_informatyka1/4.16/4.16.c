/* Wyznacz doœwiadczalnie maksymalne wartoœci n, dla których mo¿na wyznaczyæ silniê 
z wykorzystaniem ka¿dego typu danych: unsigned char, unsigned short, unsigned int, unsigned long int, float, double. */

#include <stdio.h>

int main()
{

	printf("Wprowadz n, gdzie !n: ");
	int n,i;
	unsigned char wynik_uc=1;
	unsigned short wynik_us=1;
	unsigned int wynik_ui=1;
	unsigned long int wynik_uli=1;
	float wynik_f=1;
	double wynik_d=1;
	scanf("%d",&n);

		//20!= 1*2*3*4*5*6*7*9*9*10*11*12*13*14*15*16*17*18*19*20;
		//	n!=1*2*3*...*n;
		//wynik=n*(n-1)*(n-2)*...*(n-(n+1))
		
		for(i=1;i<=n;i++)
		{
			wynik_uc=wynik_uc*i;
			wynik_us=wynik_us*i;
			wynik_ui=wynik_ui*i;
			wynik_uli=wynik_uli*i;
			wynik_f=wynik_f*i;
			wynik_d=wynik_d*i;
		}
			printf("Wynik unsigned char: %c\n",wynik_uc); 		//9
			printf("Wynik unsigned short: %d\n",wynik_us);		//17
			printf("Wynik unsigned int: %d\n",wynik_ui);		//19
			printf("Wynik unsigned long int: %li\n",wynik_uli);	//31
			printf("Wynik float: %f\n",wynik_f);				//34
			printf("Wynik double: %lf\n",wynik_d);				//170
		

	return 0;
}
