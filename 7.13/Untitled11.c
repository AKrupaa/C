#include <stdio.h>

void funkcja(float a)
{
	while(a<1.1||a>2.75)
	{
		printf("Wartoœæ poza zakresem. Spróbuj ponownie: ");
		scanf("%f", &a);
	}
	int cm=a*100;
	int cale=cm/2.54;
	int stopa=cale/12;
	cale=cale-stopa*12;
	printf("Wzrost w jednostkach imperialnych to: %i'%i''", stopa,cale);
}


int main()
{
	float a;
	printf("Wprowadz wzrost w metrach: ");
	scanf("%f",&a);
	funkcja(a);
	return 0;
}
