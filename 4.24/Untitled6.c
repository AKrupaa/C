//Zapoznaj siê z funkcj¹ rand(). Uwaga: do programu nale¿y do³¹czyæ plik nag³ówkowy stdlib.h - #include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int i, zarodek;
    time_t tt;
    zarodek = time(&tt);
    srand(zarodek);   // za zarodek wstawiamy pobrany czas w sekundach
    for(i= 1; i<= 5; ++i)
        printf("%d. liczba pseudolosowa to %d\n", i, rand());

    // przyklad dla ograniczonego przedzialu
    printf("Liczba pseudolosowa z przedzia³u <0, 99> to %d\n", rand()%100);
    printf("Liczba pseudolosowa z przedzia³u <0, 99> to %d\n", (int)(rand() / (RAND_MAX + 1.0) * 100.0));

    // przyklad jak wplywa zarodek na wynik losowania
    zarodek= 1337;
    srand(zarodek);
    printf("Dwie pseudolosowe liczby dla zarodka %d to: %d, %d\n", zarodek, rand(), rand());
    srand(zarodek);
    printf("Dwie pseudolosowe liczby dla zarodka %d to: %d, %d\n", zarodek, rand(), rand());
//zapozna³em siê :-)
    return 0;
}
