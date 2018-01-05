/* Napisz program, kt�ry sprawdza czy liczba ca�kowita podana z klawiatury jest liczb� pierwsz�. 
Program powinien umo�liwi� u�ytkownikowi wpisanie liczby, a nast�pnie 
wy�wietli� s�owo �TAK�, gdy liczba jest pierwsza lub �NIE� w przeciwnym wypadku. 
Je�eli podana zostanie liczba mniejsza ni� 2 (wliczaj�c w to liczby ujemne), 
program powinien wy�wietli� s�owo �Error�. 
Liczba pierwsza to taka, kt�ra dzieli si� ca�kowicie tylko przez 1 oraz przez sam� siebie. 
Podpowied�: reszt� z dzielenia a przez b wyznacza wyra�enie (a % b).*/

#include <stdio.h>

int main()
{
	int liczba;
	int i;
	int suma=0;
	printf("Program sprawdza czy liczba jest liczba pierwsza\nWprowadz liczbe: ");
	scanf("%i",&liczba);
	for(i=1;i<=liczba;i++)
	{
		if(liczba%i==0)
		{
			//printf("%i modulo %i=0\n",liczba,i);
			suma+=1;
		}
	}
	if(liczba>1)
	{
		if(suma==2)
		{
			printf("TAK");
		}
		else
		{
			printf("NIE");
		}
	}
	else
	{
		printf("Error");
	}

	

	return 0;
}
