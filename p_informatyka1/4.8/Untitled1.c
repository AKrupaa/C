/* Wyœwietl tabliczkê mno¿enia dla liczb od 0 do 10. 
Tabliczka ma byæ czytelnie podzielona na wiersze i kolumny (stosuj formatowanie podobne jak w zadaniu 4.7).	*/

#include <stdio.h>

int main()
{
	int i,k;
	
	for(i=1;i<11;i++)
	{
	//	printf("%d*x\n",i);
		for(k=1;k<11;k++)
		{
			printf("%2d * %2d=%3d\n",i,k,i*k);
		}
	}
	getchar();
	return 0;
}
