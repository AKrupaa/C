//Napisz program, kt�ry wyznaczy sum� S kolejnych wyraz�w szeregu przy za�o�eniu, 
//�e warto�ci tych wyraz�w s� wi�ksze od =0,0001.
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
