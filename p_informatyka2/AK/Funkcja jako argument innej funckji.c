#include <stdio.h>

int dodawanie( int a, int b );
int mnozenie( int a, int b );

typedef int( * dzialanieT )( int, int );

int oblicz( int a, int b, dzialanieT pDzialanie );
int obliczBezDefinicji( int a, int b, int( * pDzialanie )( int, int ) );

int main()
{
    printf( "Wynik mnozenia = %d\n", oblicz( 3, 4, mnozenie ) );
    printf( "Wynik dodawania = %d\n", oblicz( 3, 4, dodawanie ) );
    printf( "Wynik mnozenia = %d\n", obliczBezDefinicji( 3, 4, mnozenie ) );
    printf( "Wynik dodawania = %d\n", obliczBezDefinicji( 3, 4, dodawanie ) );
    return 0;
}

int dodawanie( int a, int b )
{
    return a + b;
}

int mnozenie( int a, int b )
{
    return a * b;
}

int oblicz( int a, int b, dzialanieT pDzialanie )
{
    return pDzialanie( a, b );
}

int obliczBezDefinicji( int a, int b, int( * pDzialanie )( int, int ) )
{
    return pDzialanie( a, b );
}
