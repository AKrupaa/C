/*
Napisz program, 
kt�ry dla polskiego imienia wprowadzonego z klawiatury sprawdza, czy jest ono rodzaju m�skiego czy �e�skiego.
*/

#include <stdio.h>
#include <string.h>



int main()
{
	char txt[50];
	int samogloski=0;
	printf("Wprowadz polskie imie: ");
    gets(txt);
    
    int dlugosc=strlen(txt);
    
    if(txt[dlugosc-1]=='a')
    {
    	printf("Jest rodzaju zenskiego");
	}
	else printf("Jest rodzaju meskiego");
	
	return 0;
}
