#include <stdio.h>


void cls()
{
	printf("\n\n\n\n");
}

int tak=0;
int main()
{
	printf(" \"Jest\"\n \"to\"\n \"program\"\n \"wyswietlajacy\"\n \"minimum\"\n \"piec\"\n \"slow\"\n \"na\"\n \"ekranie\"\n \"kazde\"\n \"z\"\n \"nich\"\n \"w\"\n \"nowej\"\n \"lini\"\n");
	printf("Czy wywolac program jeszcze raz?\nWprowadz 1 albo zakoncz program wprowadzajac 0 \n");
	scanf("%d", &tak);
		switch(tak)
   		{
       	case 0:
       		printf("Wyjscie z programu, bye bye");
    		break;   
    	case 1:
			printf(" \"Jest\"\n \"to\"\n \"program\"\n \"wyswietlajacy\"\n \"minimum\"\n \"piec\"\n \"slow\"\n \"na\"\n \"ekranie\"\n \"kazde\"\n \"z\"\n \"nich\"\n \"w\"\n \"nowej\"\n \"lini\"\n");
			printf("Nastepuje wyjscie z programu!");
			break;
    	default: 
		printf("Podales zla cyfre, nastepuje wyjsc z programu!");
        }
	return 0;
}
