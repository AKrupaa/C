#include <stdio.h>
#include <math.h>

float odleglosc(int x2, int x1, int y2, int y1)
{
	float odleglosc=sqrt(((x2-x1)*(x2-x1))+((float)(y2-y1)*(y2-y1)));
	return odleglosc;
}

int main()
{
	struct student
	{
		long ID;
		char imie[20];
		char nazwisko[20];
		float ocena;
	};
	
	struct student foo;
	int liczbaS;
	int flaga=0;
	printf("Wprowadz liczbe studentow: ");
	scanf("%d", &liczbaS);
	if(liczbaS<0)
	{
		printf("Liczby naturalne sie klaniaja ;)");
		return 0;
	}
	if(liczbaS==0)
		flaga=1;
	
	
	if(flaga==0)
	{
		int i=0;
		FILE *stream;
		if((stream=fopen("studenci.txt","w"))==NULL)
		{
			printf("Nie mozna stworzyc pliku");
			return 0;
		}
		
		for(i=0;i<liczbaS;i++)
		{
			printf("Student nr %i\nWprowadz:\n:ID, imie, nazwisko, ocene\n", i+1);
			scanf("%d %s %s %f", &foo.ID, &foo.imie, &foo.nazwisko, &foo.ocena);
			
			fprintf(stream,"Student nr %d\nID %d\nImie %s\nNazwisko %s\nOcena %f\n\n", i+1,foo.ID, foo.imie, foo.nazwisko, foo.ocena);
		}
		
		fclose(stream);
	}
	
	//rozmiar
	printf("\nRozmiar= %i\n", sizeof(foo));
	
	//punkt policz odleglosc:
	
	struct point
	{
		int x;
		int y;
	};
	struct point p1={2,3};
	struct point p2={-3,7};
	
//	float odleglosc=sqrt(((p2.x-p1.x)*(p2.x-p1.x))+((float)(p2.y-p1.y)*(p2.y-p1.y)));
	printf("Odleglosc= %f\n\n", odleglosc(p2.x,p1.x,p2.y,p1.y));
	
	struct point p3={1,1};
	struct point p4={2,2};
	
	//znajdz najwieksza odleglosc wg wszystkich puntkow
	float tab[5];
	tab[0]=odleglosc(p1.x,p2.x,p1.y,p2.y);
	tab[1]=odleglosc(p1.x,p3.x,p1.y,p3.y);
	tab[2]=odleglosc(p1.x,p4.x,p1.y,p4.y);
	tab[3]=odleglosc(p2.x,p3.x,p2.y,p3.y);
	tab[4]=odleglosc(p2.x,p4.x,p2.y,p4.y);
	tab[5]=odleglosc(p3.x,p4.x,p3.y,p4.y);
	float najwieksza=tab[0];
	int i;
	int j;
	for(i=1;i<6;i++)
	{
		if(najwieksza<tab[i])
		{
			najwieksza=tab[i];
			j=i;
		}
		
	}
	printf("Najwieksza odleglosc = %f w kombinacji nr %i\n\n", najwieksza,j);
	
	//g0dziny
	
	struct godziny
	{
		int sek;
		int min;
		int godz;
	} tabG[1];
	
	printf("Podaj 'PIERWSZE' godzine, minute i sekunde: ");
	scanf("%i %i %i", &tabG[0].godz, &tabG[0].min, &tabG[0].sek);
	
	printf("Podaj 'DRUGIE' godzine, minute i sekunde: ");
	scanf("%i %i %i", &tabG[1].godz, &tabG[1].min, &tabG[1].sek);
	
	if(tabG[0].godz>=tabG[1].godz)
	{
		if(tabG[0].min>=tabG[1].min)
		{
			if(tabG[0].sek>=tabG[1].sek)
			{
				printf("Roznica:\ngodzin: %i\nminut: %i\nsekund: %i",tabG[0].godz-tabG[1].godz, tabG[0].min-tabG[1].min, tabG[0].sek-tabG[1].sek);
			}
		}
	}
	
	return 0;
}
