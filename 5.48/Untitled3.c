/*
Napisz program, który dla podanego tekstu wyœwietla liczbê samog³osek. Pamiêtaj, ¿e litera ‘A’ oraz ‘a’ to dwa ró¿ne symbole
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
