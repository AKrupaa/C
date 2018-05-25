#include <stdio.h>

int main()
{

	float fPI = 3.14159265359;
	double dPI = 3.14159265359;
	//printf("fPI= %.11f \n", fPI); //nie dziala
	//	printf("dPI= %.11lf", dPI); //dzia³a
	
	printf("fPI= %.11f \ndPI= %.11lf", fPI, dPI);
return 0;	
}
