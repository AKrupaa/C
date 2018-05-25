#include <stdio.h>

int main()
{
	char plec;
	int wiek;
	printf("Wprowadz swoja plec (m/k)\n");
	scanf("%c", &plec);
	printf("Wprowadz swoj wiek\n");
	scanf("%d", &wiek);
	
	
	
	if(wiek>0)
	{
		//dzieci
		if(plec=='m'||plec=='k')
		{
			if(wiek>0 && wiek <4)
			{
				printf("zapotrzebowania na energie: 1300");
			}
			if(wiek>3 && wiek <7)
			{
				printf("zapotrzebowania na energie: 1700");
			}
			if(wiek>6 && wiek <10)
			{
				printf("zapotrzebowania na energie: 2100");
			}
		}
		
		if(plec=='m')
		{
			//mezczyzni
			if(wiek>9 && wiek <13)
			{
				printf("zapotrzebowania na energie: 2600");
			}
			
			if(wiek >12 && wiek<16 )
			{
				printf("zapotrzebowania na energie: 3000-3300");
			}
			
			if(wiek>15 && wiek<21)
			{
				printf("zapotrzebowania na energie: 3200-3700");
			}
			
			if(wiek>20&&wiek<65)
			{
				printf("zapotrzebowania na energie: 2800-3200");
			}
			
			if(wiek>64&&wiek<76)
			{
				printf("zapotrzebowania na energie: 2300");
			}
			
			if(wiek>74)
			{
				printf("zapotrzebowania na energie: 2100");
			}
		}
		
		if(plec=='k')
		{
			//kobiety
			if(wiek>9 && wiek<13)
			{
				printf("zapotrzebowania na energie: 2300");
			}
			
			if(wiek>12&&wiek<16)
			{
				printf("zapotrzebowania na energie: 2600-2800");
			}
			
			if(wiek>15&&wiek<21)
			{
				printf("zapotrzebowania na energie: 2500-2700");
			}
			
			if(wiek>20&&wiek<60)
			{
				printf("zapotrzebowania na energie: 2400-2800");
			}
			
			if(wiek>59&&wiek<76)
			{
				printf("zapotrzebowania na energie: 2200");
			}
			
			if(wiek>74)
			{
				printf("zapotrzebowania na energie: 2000");
			}
		}
	
	}
	else
	{
		printf("Wprowadz poprawny wiek!\n");
	}
	
	
	return 0;
}
