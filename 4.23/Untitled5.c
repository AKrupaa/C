/* 
Napisz program wy�wietlaj�cy liczby od 0 do 100, 
przy czym liczby z zakres�w <10;15) <40;60> oraz (70;80) maj� by� oznaczone gwiazdk�.
*/
#include <stdio.h>

int main()
{
	int i;
	for(i=0;i<=100;i++)
	{
		if((i>9&&i<15)||(i>39&&i<61)||(i>70&&i<80))
		{
			printf("* ");
		}
		else
		{
			printf("%i ",i);
		}
	}
	getchar();
	return 0;
}
