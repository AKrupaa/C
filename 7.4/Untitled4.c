#include <stdio.h>

void znak(int wart)
{
	if(wart<0)
	printf("ujemna");
	if(wart==0)
	printf("zero");
	if(wart>0)
	printf("dodatnia");
}


int main()
{
	int argument;
	printf("Podaj liczbe: ");
	scanf("%i",&argument);
	znak(argument);
	return 0;
}
