/*
Napisz program, który pyta u¿ytkownika o jego imiê, 
a nastêpnie wyœwietla tekst powitalny 
“Witaj (…) !”, gdzie zamiast (…) program wyœwietla pobrane imiê.
*/

#include <stdio.h>

int main()
{
    char name[20];
    printf("Wprowadz imie: ");
    scanf("%s", name);
    system("cls");
    printf("Witaj %s !", name);
    return 0;
}
