//ciag niemonotoniczny
#include<stdio.h>
int main()
{
	float tab[1000];
	int i, k, dlugosc = 1, ilosc_ciagow = 0, elementy = 1, max_elementy = 0, wspolrzedna[1000];
	puts("wprowadzaj kolene liczby, a program wskaze nadluzszy niemonotoniczny ciag, wprowadzenie wartosci \"0\" zatrzyma pobieranie danych");
	do 
	{
		scanf_s("%f", &tab[0]);
	} while (tab[0] == 0);
	for (i = 1;i < 1000;i++)
	{
		scanf_s("%f", &tab[i]);
		if (tab[i] == 0) i = 1000;
		else dlugosc++;
	}
	for (i = dlugosc;i < 1000;i++)
	{
		tab[i] = 0;
	}
	for (i = 1;i < dlugosc + 1;i++)
	{
		if (tab[i + 1] != 0)
		{
			if ((tab[i] > tab[i - 1] && tab[i] > tab[i + 1]) || (tab[i] < tab[i - 1] && tab[i] < tab[i + 1]))
			{
				elementy++;
				if (elementy > max_elementy) max_elementy = elementy;
			}
			else if ((tab[i - 1] > tab[i - 2] && tab[i - 1] > tab[i]) || (tab[i - 1] < tab[i - 2] && tab[i - 1] < tab[i]))
			{
				elementy++;
				if (elementy > max_elementy) max_elementy = elementy;
				elementy = 1;
			}
			else elementy = 1;
		}
		else if (tab[i] != 0)
		{
			if ((tab[i - 1] > tab[i - 2] && tab[i - 1] > tab[i]) || (tab[i - 1] < tab[i - 2] && tab[i - 1] < tab[i]))
			{
				elementy++;
				if (elementy > max_elementy) max_elementy = elementy;
			}
			else elementy = 1;
		}
	}
	elementy = 1;
	for (i = 1;i < dlugosc + 1;i++)
	{
		if (tab[i + 1] != 0)
		{
			if ((tab[i] > tab[i - 1] && tab[i] > tab[i + 1]) || (tab[i] < tab[i - 1] && tab[i] < tab[i + 1]))
			{
				elementy++;
				if (max_elementy == elementy)
				{
					ilosc_ciagow++;
					wspolrzedna[ilosc_ciagow - 1] = i - max_elementy + 1;
					elementy = 1;
				}
			}
			else if ((tab[i - 1] > tab[i - 2] && tab[i - 1] > tab[i]) || (tab[i - 1] < tab[i - 2] && tab[i - 1] < tab[i]))
			{
				elementy++;
				if (max_elementy == elementy)
				{
					ilosc_ciagow++;
					wspolrzedna[ilosc_ciagow - 1] = i - max_elementy + 1;	
					elementy = 1;
				}
				elementy = 1;
			}
			else elementy = 1;
		}
		else if (tab[i] != 0)
		{
			if ((tab[i - 1] > tab[i - 2] && tab[i - 1] > tab[i]) || (tab[i - 1] < tab[i - 2] && tab[i - 1] < tab[i]))
			{
				elementy++;
				if (max_elementy == elementy)
				{
					ilosc_ciagow++;
					wspolrzedna[ilosc_ciagow - 1] = i - max_elementy + 1;
					elementy = 1;
				}
				elementy = 1;
			}
			else elementy = 1;
		}
	}
	if (max_elementy > 2)
	{
		printf("liczba elementow nalezacych do najdluzszego podciagu niemonotonicznego:%d\n", max_elementy);
		printf("liczba takich podciagow:%d\n", ilosc_ciagow);
		for (i = 0;i < ilosc_ciagow;i++)
		{
			printf("indeks 1 elementu %d podciagu to:%d", i + 1, wspolrzedna[i]);
			for (k = wspolrzedna[i];k < wspolrzedna[i] + max_elementy;k++)
			{
				printf(" %.3f", tab[k]);
			}
			printf("\n");
		}
	}
	else puts("nie ma zadnego niemotonicznego podciagu w danym ciagu");
	system("pause");
	return 0;
}
