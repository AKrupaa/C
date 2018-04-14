#include <stdio.h>
#include <math.h>

int plus10(int *wsk1)
{
	return (10+ *wsk1);
}

int suma(int *wsk2, int *wsk3)
{
	return (*wsk3 + *wsk2);
}

int main()
{
	int A=5;

	int *wA;
	wA=&A;
	printf("%i ", *wA);	//5
	int temp=plus10(wA);	//temp=15
	printf("temp=%i\n", temp);	//temp=15
	printf("wA=%i\n", *wA);	//5
	
	int *wtemp;
	wtemp=&temp;
	int temp1=suma(wA, wtemp);
	printf("temp1= %i", temp1);

	return 0;
}
