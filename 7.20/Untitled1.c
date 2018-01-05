/*
Napisz program licz¹cy pole trójk¹ta wed³ug wzoru Herona. 
U¿ytkownik podaje wspó³rzêdne wierzcho³ków trójk¹ta [x1, y1, x2, y2, x3, y3]. 
Na podstawie tej informacji obliczane jest pole figury wed³ug wzoru:
gdgdzie: a, b, c - d³ugoœci boków trójk¹ta wyznaczone z podanych wspó³rzêdnych za pomoc¹ twierdzenia Pitagorasa; 
p - po³owa obwodu trójk¹ta. 
Napisz funkcje do wyznaczania odleg³oœci pomiêdzy dwoma punktami, 
obliczania obwodu trójk¹ta oraz pola trójk¹ta. 
Funkcje maj¹ mieæ nastêpuj¹ce prototypy:
float distance(int x1, int y1, int x2, int y2);
float perimeter(float a, float b, float c);
float area(float a, float b, float c); 
*/

#include <stdio.h>
#include <math.h>


float distance(int x1, int y1, int x2, int y2)	//dlugosc
{
	return (sqrt((pow(x2-x1,2)+pow(y2-y1,2))));
}

float perimeter(float a, float b, float c)	//obwod
{
	return a+b+c;
}

float area(float a, float b, float c)	//pole
{
	float obwod2;
	float pole;
	
	obwod2=(perimeter(a,b,c))/2;
	pole=sqrt((obwod2)*(obwod2-a)*(obwod2-b)*(obwod2-c));
	return pole;
}



int main()
{
	int x1,y1,x2,y2,x3,y3;
//	float dlAB,dlAC,dlBC;
//	dlAB=distance(x1,y1,x2,y2);
//	dlAC=distance(x1,y1,x3,y3);
//	dlBC=distance(x2,y2,x3,y3);
	
	
	
	printf("Podaj wspolrzedne wierzcholkow trojkata:\n");
	printf("Podaj wspolrzedne x pierwszego punktu: ");
	scanf("%i",&x1);
	printf("Podaj wspolrzedne y pierwszego punktu: ");
	scanf("%i",&y1);
	printf("Podaj wspolrzedne x drugiego punktu: ");
	scanf("%i",&x2);
	printf("Podaj wspolrzedne y drugiego punktu: ");
	scanf("%i",&y2);
	printf("Podaj wspolrzedne x trzeciego punktu: ");
	scanf("%i",&x3);
	printf("Podaj wspolrzedne y trzeciego punktu: ");
	scanf("%i",&y3);
	
	printf("Pole= %f", area(distance(x1,y1,x2,y2),distance(x1,y1,x3,y3),distance(x2,y2,x3,y3)));
	
	return 0;
}
