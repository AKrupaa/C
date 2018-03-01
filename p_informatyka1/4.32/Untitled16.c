//Napisz program, który wyznaczy sumê S kolejnych wyrazów szeregu przy za³o¿eniu, 
//¿e wartoœci tych wyrazów s¹ wiêksze od =0,0001.
// 1/n(n+1)
#include <stdio.h>

int main()
{
	float i;
	int n;
	printf("Wprowadz n (n nalezy do Z+): ");
	scanf("%i",&n);
	float suma=0;
	for(i=0;i<=n;i++)
	{
		if(i!=0)
		{
		suma=suma+1/(i*(i+1));
		printf("%f\n",suma);
		}
	}
	return 0;
}
