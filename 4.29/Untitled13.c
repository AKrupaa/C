//Wy�wietlaj liczby losowe z przedzia�u < -1000; 1000>, 
//po ka�dej umieszczaj�c znak nowej linii tak d�ugo a� program wylosuje liczb� z zakresu <100; 200>.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	srand(4);
	int x=-1000+rand()%2000;
	while(x!=(100+rand()%100))
	{
		x=-1000+rand()%2000;
		printf("%i\n",x);
	}
	getchar();
	return 0;
}
