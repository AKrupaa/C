#include <stdio.h>
#include <time.h>

struct telemetria{
unsigned paliwo: 1;
unsigned radio: 1;
unsigned tv: 1;
unsigned woda: 1;
unsigned jedzenie: 1;
unsigned odpady: 1;
}aha;

void wyswietl(struct telemetria i);
void zapisz(struct telemetria i);

void monetka()
{
	int strona;	
	strona= rand()%2 ? 1 : 0;		//1 = orze³ , 0 = reszka
	
	strona ? printf("Orze³") : printf("Reszka");
}

enum pojazd{samochod,tramwaj,pociag,samolot};

void enumbul()
{
	unsigned wybor;
	printf("Wcisnij klawisz: ");
	scanf("%i", &wybor);
	
	if(wybor==samochod)
	printf("samochod");
	else if(wybor==tramwaj)
	printf("tramwaj");
	else if(wybor==pociag)	
	printf("pociag");
	else if(wybor==samolot)
	printf("samolot");
	else if(wybor>3)
	printf("problem...");
	else if(wybor<0)
	printf("problem...");
}


typedef enum{TAK,TRUE=1, NIE,FALSE=0} boolean;

void tak_nie()
{
	char ch;
	boolean binarny;
	printf("Kliknij literke: ");
	scanf("%c", &ch);
	
	if(isdigit(ch))
		binarny=TAK;
	else
	binarny = FALSE;
	
	printf("%i", binarny);
	
}

int main()
{
	srand(time(NULL));
	struct telemetria aha;
	aha.paliwo=rand()%2;
	aha.radio=rand()%2;
	aha.tv=rand()%2;
	aha.woda=rand()%2;
	aha.jedzenie=rand()%2;
	aha.odpady=rand()%2;
	wyswietl(aha);
	
	zapisz(aha);
	
	system("cls");
	
	monetka();
	
	system("cls");
	
	enumbul();
	
	system("cls");
	
	tak_nie();
	
	
	return 0;
}

void wyswietl(struct telemetria i)
{
	printf("Paliwo: %i\nRadio: %i\nTV: %i\nWoda: %i\nJedzenie: %i\nOdpady: %i\n", i.paliwo,i.radio,i.tv,i.woda,i.jedzenie,i.odpady);
}

void zapisz(struct telemetria i)
{
	FILE *zapis;
	if((zapis=fopen("zapis.txt","w"))==NULL)
	{
		printf("Problem z zapisem...");
	}
	
	fprintf(zapis,"Paliwo: %i\nRadio: %i\nTV: %i\nWoda: %i\nJedzenie: %i\nOdpady: %i\n", i.paliwo,i.radio,i.tv,i.woda,i.jedzenie,i.odpady);
	fclose(zapis);
	
}














