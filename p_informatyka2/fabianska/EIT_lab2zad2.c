#include <stdio.h>

int main()
{
	//int
	printf("Wprowadz int 5: \n");
	int tab[5];
	int *wtab;
	wtab=&tab[0];
	int i;
	for(i=0;i<5;i++)
		scanf("%i",wtab+i);
	
	for(i=0;i<5;i+=2)
	printf("%i ",*(wtab+i));
	
	//float
	printf("\nWprowadz float 5: \n");
	float tabF[5];
	float *wtabF;
	wtabF=&tabF[0];	
	
	for(i=0;i<5;i++)
		scanf("%f",wtabF+i);
	
	for(i=0;i<5;i++)
		printf("%f ",*(wtabF+i));
	
	//char
	printf("\nWprowadz char 5: \n");
	char tabC[5];
	char *wtabC;
	wtabC=&tabC[0];
	
	for(i=0;i<5;i++)
	{
		scanf("%c",wtabC+i);
		fflush(stdin);
	}
		
		
	for(i=0;i<5;i++)
		printf("%c", *(wtabC+i));
	
	return 0;	
}
