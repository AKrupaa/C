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
	scanf("%d", &tak);
		switch(tak)
   		{
       	case 0:
       		printf("Wyjscie z programu, bye bye");
    		break;   
    	case 1:
    		printf("Jest\nto\nprogram\nwyswietlajacy\nminimum\npiec\nslow\nna\nekranie\nkazde\nz\nnich\nw\nnowej\nlini\n");
			printf("Nastepuje wyjscie z programu!");
			break;
    	default: 
		printf("Podales zla cyfre, nastepuje wyjsc z programu!");
        }
        getchar();
	return 0;
}
