#include <stdio.h>
#include <time.h>
#define R 10

int main()
{
	int tab[R][R];
	int x,y,d;
	do
	{
		printf("Wprowadz x, y: ");
		d=scanf("%i%i",&x,&y);
		fflush(stdin);
		printf("%i\n",d);
	} while(d!=2||x<0||x>R-1||y<0||y>R-1);

	srand(time(NULL));
	int m,n;
	int suma=0;
	for(m=0;m<R;m++)
	{
		for(n=0;n<R;n++)
		{
			tab[m][n]=1+rand()%9;
			printf("%i ",tab[m][n]);
			if((m-n==x-y)||m+n==x+y) suma+=tab[m][n];
		}
		printf("\n");
	}
		
	printf("%i ",suma);
	
	return 0;
}
