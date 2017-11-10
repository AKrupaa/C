/*
Napisz program, który pobierze od u¿ytkownika liczby (nie wiêcej ni¿ 1000), 
a nastêpnie wypisze wszystkie elementy ci¹gu znajduj¹ce siê w komórkach, 
których indeks jest liczb¹ pierwsz¹ pocz¹wszy od koñca ci¹gu. 
Pojawienie siê wartoœci 0 na wejœciu bêdzie oznacza³o zakoñczenie ci¹gu
*/
int main()
{

	int i=0;
	const int max= 1000;
	int tab[max];
	int liczba;
	printf("Wprowadz (max %i) liczb po spacji: \n", max);
	scanf("%i",&liczba);
	if(liczba!=0)
	{
		if(liczba>0)
		tab[i++]=liczba;
	}
	else
	{
		printf("Wprowadzono 0 na poczatku. Nastepuje wyjscie z programu!"); return 0;
	}
	
	while(liczba!=0&&i<max)
	{
		scanf("%i", &liczba);
		if(liczba>0)
		{
			tab[i++]=liczba;	
		}	
	}
	
	//kiedy to liczba jest liczba pierwsza... kiedy liczba jest podzielna przez sama siebie i jeden,
	//czyli nie moze meic wiecej dzielikow niz 2;
	int suma;
	i--;
	for(i;i>=0;i--)
	{
		suma=0;
		for(int q=1;q<=tab[i];q++)
		{
			if(tab[i]%q==0)
			{
				suma+=1;
			}
		}
		if(suma==2)
		{
			printf("%i ", tab[i]);
		}
	}
	
	getchar();
	return 0;
}
