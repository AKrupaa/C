/*
Wykorzystuj¹c funkcje sin i cos, napisane w ramach zadania 7.22, 
wyznacz najmniejsz¹ wartoœæ n, dla której odchy³ka nowych funkcji trygonometrycznych, 
wzglêdem tych z biblioteki standardowej (plik math.h), 
bêdzie mniejsza ni¿ 0,0001 dla k¹ta podanego przez u¿ytkownika.
*/

#include <stdio.h>
#include <math.h>

float silnia(int k)
{
	float silnia1=1;
	for(int i=k;i>0;i--)
	{
		silnia1*=i;
	}
	return silnia1;
}

float sinus(int n, float x)
{
	float suma=0;
	for(int k=0;k<=n;k++)
	{
		suma+=((pow(-1,k)) / (silnia((2*k)+1)) * pow(x,((2*k)+1)));
	}
	return suma;
}

float cosinus(int n, float x)
{
	float suma=0;
	for(int k=0;k<=n;k++)
	{
		suma+=((pow(-1,k)) / (silnia(2*k)) * pow(x,(2*k)));
	}
	return suma;
}


int main()
{
	float x;
	int n;
	printf("Podaj wartosc kata, dla ktorego chcesz obliczyc wartosc funkcji sin i cos: ");
	scanf("%f",&x);
	for(int n=1;n<2000;n++)
	{
	//	printf("sin: %11f cos: %11f\n", sinus(n,x),cosinus(n,x));
	//	printf("sinM: %10f cosM: %10f\n", sin(x),cos(x));
	//	printf("\n");
		if((sinus(n,x)-sin(x)<0.0001)&&(cosinus(n,x)-cos(x)<0.0001))
		{
			printf("\n%i",n); break;
		}
	}
	
	return 0;
}
