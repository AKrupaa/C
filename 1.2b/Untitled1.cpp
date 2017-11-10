#include <stdio.h>


void cls()
{
	printf("\n\n\n\n");
}

int tak=0;
int main()
{
	printf("Jest\nto\nprogram\nwyswietlajacy\nminimum\npiec\nslow\nna\nekranie\nkazde\nz\nnich\nw\nnowej\nlini\n");
	printf("Czy wywolac program jeszcze raz?\nWprowadz 1 albo zakoncz program wprowadzajac 0 \n");
	int tak=2; // z góry nada³em liczbê aby odpali³a siê pêtla
	while(tak>0||tak<0)
	{

	scanf("%d", &tak);
	
		// czysc ekran ale jak?
		cls();
		
		switch(tak)
   		{
       	case 0:
       		printf("Wyjscie z programu, bye bye");
    		break;   
    	case 1:
    		printf("Jest\nto\nprogram\nwyswietlajacy\nminimum\npiec\nslow\nna\nekranie\nkazde\nz\nnich\nw\nnowej\nlini\n");
			printf("Czy wywolac program jeszcze raz?\nWprowadz 1 albo zakoncz program wprowadzajac 0 \n");
			break;
    	default: 
		printf("Czy wywolac program jeszcze raz?\nWprowadz 1 albo zakoncz program wprowadzajac 0 \n");
        }
	}
	return 0;
}
