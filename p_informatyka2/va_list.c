#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <time.h>

int mnoz (int pierwszy, ...)
{
	va_list arg;
	int iloczyn = 1, t;
	va_start (arg, pierwszy);
	for (t = pierwszy; t; t = va_arg(arg, int)) 
	{
		iloczyn *= t;
	}
	va_end (arg);
	return iloczyn;
}

double sumuj(int lim, ...) 
{
	int i;
	double suma = 0;
	va_list ap;
	va_start(ap, lim);
	for(i=0; i<lim; i++)
	suma += va_arg(ap, double);
	va_end(ap);
	return suma;
}

void typy(const char typ[], ...) 
{
	int i = 0, integ;
	char c, *strin;
	double doubl;
	va_list ap;
	va_start(ap,typ);
	while ( (c = typ[i++]) != '\0') 
	{
		switch (c) 
		{
		case 'i': case 'I':
			integ = va_arg(ap,int);
			printf("Liczba int : %d\n", integ);
			break;
			case 'd': case 'D':
			doubl = va_arg(ap,double);
			printf("Liczba double: %lf\n", doubl);
			break;
		case 'n': case 'N':
			strin = va_arg(ap,char*);
			printf("Napis : %s\n", strin);
			break;
		default:
			printf("Nielegalny kod typu!!!!!\n");
		}
	}	
	va_end(ap);
}



int main()
{
	int wynik;
	wynik = mnoz(5, 1, 2, 3, 4, 0);
	printf("%d\n", wynik);
	
	double s, t;
	s = sumuj(3, 1.1, 2.5, 13.3);
	t = sumuj(6, 1.1, 2.5, 13.1, 4.1, 5.1, 6.1);
	printf("Zwroc wartosc:\n suma(1.1, 2.5, 13.3): %g\n\n", s);
	printf("Zwroc wartosc:\n suma(1.1, 2.5, 13.1, 4.1, 5.1, 6.1): %g\n", t);
	

	typy("NxN","Jan",0,"Maria");
	
	getchar();
	return 0;
}


