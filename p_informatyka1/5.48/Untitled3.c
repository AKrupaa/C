/*
Napisz program, kt�ry dla podanego tekstu wy�wietla liczb� samog�osek. Pami�taj, �e litera �A� oraz �a� to dwa r�ne symbole
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char txt[50];
	int samogloski=0;
	printf("Wprowadz tekst:");
    gets(txt);
    
    for(int i=0;i<50;i++)
    {
    	if(txt[i]=='A'||txt[i]=='E'||txt[i]=='O'||txt[i]=='U'||txt[i]=='I'||txt[i]=='Y')
    	samogloski++;
    	
    	if(txt[i]=='a'||txt[i]=='e'||txt[i]=='o'||txt[i]=='u'||txt[i]=='i'||txt[i]=='y')
    	samogloski++;
	}
	printf("Liczba samoglosek wynosi: %i",samogloski);
	return 0;
}
