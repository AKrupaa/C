/*
Napisz program, który pobierze od u¿ytkownika dwa ci¹gi liczb (nie wiêcej ni¿ 100 elementów w ka¿dym). 
Pojawienie siê wartoœci 0 na wejœciu bêdzie oznacza³o zakoñczenie ci¹gu. 
Program ma wyœwietliæ, po spacjach, wszystkie elementy, które wyst¹pi³y przynajmniej dwa razy w drugim ci¹gu, 
a nie wyst¹pi³y ani razu w pierwszym ci¹gu.
*/

#include <stdio.h>

int main()
{
	int i=0;
	int o=0;
	const int max=100;
	int tab1[100];
	int tab2[100];
	int liczba;
	printf("Wprowadz pierwszy ciag liczbowy (max %i) liczb po spacji: \n", max);
	scanf("%i",&liczba);
	if(liczba!=0)
	{
		tab1[i++]=liczba;
	}
	else
	{
		printf("Wprowadzono 0 na poczatku. Nastepuje wyjscie z programu!"); return 0;
	}
	
	while(liczba!=0&&i<max)
	{
		scanf("%i", &liczba);
		if(liczba!=0)
		{
			tab1[i++]=liczba;	
		}	
	}
	
	// --------------------------------------------------------------------------
	
	printf("Wprowadz drugi ciag liczbowy (max %i) liczb po spacji: \n", max);
	scanf("%i",&liczba);
	if(liczba!=0)
	{
		tab2[o++]=liczba;
	}
	else
	{
		printf("Wprowadzono 0 na poczatku. Nastepuje wyjscie z programu!"); return 0;
	}
	
	while(liczba!=0&&o<max)
	{
		scanf("%i", &liczba);
		if(liczba!=0)
		{
			tab2[o++]=liczba;	
		}	
	}
	/*
	Program ma wyœwietliæ, po spacjach, wszystkie elementy, które wyst¹pi³y przynajmniej dwa razy w drugim ci¹gu, 
	a nie wyst¹pi³y ani razu w pierwszym ci¹gu.
	*/
	
	//przynajmniej dwa razy w drugim ciagu
	int suma;
	int tab2A[o];
	int p=0;
	for(int a=0; a<o; a++)
	{
		suma=0;
		for(int s=0;s<o;s++)
		{
			if(tab2[a]==tab2[s])
			suma+=1;
		}
		if(suma>=2)
		tab2A[p++]=tab2[a];
	//	printf("tab2A[%i] = %i \n", p-1, tab2A[p-1]);
	}
	//tab2A[p] zawiera wszystkie powtarzajace sie+dublikacje
	
	//kopia tablicy tab2A[p]
		int tab2AK[p];
		for(int d=0;d<p;d++)
		{
			tab2AK[d]=tab2A[d];
	//		printf("tab2AK[%i] = %i\n", d, tab2AK[d]); poprawnie
		}
	//	printf("\n BEZ DUPLIKATOW \n\n");
		//usuwanie duplikatow, duplikat zastapiony jako NULL
		for(int f=0;f<p;f++)
		{
			for(int g=f+1;g<p;g++)
			{
				if(tab2A[f]==tab2AK[g])
				{
					tab2AK[g]=NULL;
				}
			}	
			//	for(int ss=0;ss<p;ss++)
			//	printf("tab2AK[%i] = %i\n", ss, tab2AK[ss]); poprwnie
		}
		//zapis na czysto elementow bez wartosci pustych;
		
		int u=0;
		int tab2C[p];
		for(int k=0;k<p;k++)
		{
			if(tab2AK[k]!=NULL)
			tab2C[u++]=tab2AK[k];
		}
		
	//	for(int ss=0;ss<u;ss++)
	//	printf("tab2C[%i] = %i\n", ss, tab2C[ss]); wciaz poprawnie
		
	/*
	wszystkie elementy, które wyst¹pi³y przynajmniej dwa razy w drugim ci¹gu, 
	a nie wyst¹pi³y ani razu w pierwszym ci¹gu.
	*/
	printf("Oto wszystkie elementy, ktore wystapily przynajmniej dwa razy w drugim ci¹gu,\n");
	printf("a nie wystapily ani razu w pierwszym ci¹gu: \n");
		for(int h=0;h<u;h++)
		{
			suma=0;
			for(int j=0;j<i;j++)
			{
			//	printf("Biore element tabC[%i] = %i\n", h, tab2C[h]);
				{
					if(tab2C[h]==tab1[j])
					{
						suma+=1;
					//	printf("\nSuma = %i\n", suma);
					//	printf("tab2C[%i]==tab1[%i] tj. %i == %i\n",h,j,tab2C[h],tab1[j]);
					}

				}
			}
			if(suma==0)
			{
				printf("%i ", tab2C[h]);
			}
		}
	
	getchar();
	return 0;
}
