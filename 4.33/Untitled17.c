/*Wylosuj 100 liczb z zakresu ‹-1000;1000>. 
SprawdŸ, ile z nich ma wartoœæ bezwzglêdn¹ mniejsz¹ b¹dŸ równ¹ 100. 
PodpowiedŸ: funkcja rand generuje liczby z zakresu <0; 32767> (sta³a RAND_MAX). 
U¿yj operatora modulo (%) aby uzyskaæ odpowiedni zakres. Patrz: https://pl.wikibooks.org/wiki/C/rand */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int losowa;
	int ile_liczb=0;
	
	int i;
	for(i=0;i<100;i++)
	{
		losowa=-1000+rand()%2000;
		//printf("%i. %i\n",i+1,losowa);
		if(losowa>=-100&&losowa<=100)
		{
			//printf("%i\n",losowa);
			ile_liczb+=1;
		}
	}
	printf("Tyle liczb ma wartosc bezwzgledna mniejsza badz rowna 100: %i",ile_liczb);
	getchar();
	
	return 0;
}
