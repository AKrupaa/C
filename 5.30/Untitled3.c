/*
Napisz program, kt�ry pobierze od u�ytkownika liczby (nie wi�cej ni� 1000), 
a nast�pnie wypisze wszystkie elementy ci�gu znajduj�ce si� w kom�rkach, 
kt�rych indeks jest liczb� pierwsz� pocz�wszy od ko�ca ci�gu. 
Pojawienie si� warto�ci 0 na wej�ciu b�dzie oznacza�o zako�czenie ci�gu
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
