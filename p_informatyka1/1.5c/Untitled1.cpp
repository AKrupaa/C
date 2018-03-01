#include <stdio.h>

int main()
{

	float fPI = 3.14159265359;
	double dPI = 3.14159265359;
	//printf("fPI= %.11f \n", fPI); //nie dziala
	//printf("dPI= %.11lf", dPI); //dzia³a
	
	printf("fPI= %.3f \ndPI= %.3lf", fPI, dPI); //samo zaokr¹gla ... eh...
return 0;	
}
