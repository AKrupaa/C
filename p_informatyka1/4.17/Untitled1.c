/*Wyznacz iloczyn wszystkich warto�ci wpisywanych przez u�ytkownika. 
Podczas wpisywania kolejnych liczb, wy�wietlaj iloczyn wszystkich ju� wpisanych. 
Liczby wczytuj tak d�ugo, a� u�ytkownik wpisze dowolny inny znak/ci�g znak�w ni� liczba a nast�pnie wy�wietl komunikat 
�Blad danych wejsciowych�. Nale�y sprawdza� czy u�ytkownik poda� liczb�. 
Wskaz�wka: Po wpisaniu pierwszej liczby jest ona mno�ona przez 1.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char liczba[20];
	float n;
	float iloczyn=1;
	printf("Program oblicza iloczyn wpisywanych kolejno przez Ciebie liczb.\nWprowadz liczbe: \n");
	
	do
	{
		gets(liczba);
		n= atof(liczba); 	 //n przyjmie zero gdy: [znak]liczbaLiczba tzn. a14 <=> n=0;
							//n!-0 gdy wprowadzane dane sa poprawne czyli liczby zmiennoprzecinkowe np. 123.456 :)
		if(n!=0)
		{
			iloczyn=iloczyn*n;
			printf("Iloczyn dotychczas wprowadzonych liczb= %f\nWprowadz kolejna liczbe: \n", iloczyn);
		}
		else
		{
			printf("\nBlad danych wejsciowych!");
		}
	}
	while(n!=0);

	
	
	
	return 0;
}
