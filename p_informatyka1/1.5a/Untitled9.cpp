#include <stdio.h>

int main()
{

	const float fPI = 3.14159265359;
	const double dPI = 3.14159265359;
	printf("fPI= %.11lf \n", fPI); //nie dziala
	printf("dPI= %.11lf", dPI); //dzia³a
return 0;	
}
