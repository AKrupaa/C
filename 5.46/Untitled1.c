/*
Napisz program, kt�ry pyta u�ytkownika o jego imi�, 
a nast�pnie wy�wietla tekst powitalny 
�Witaj (�) !�, gdzie zamiast (�) program wy�wietla pobrane imi�.
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
