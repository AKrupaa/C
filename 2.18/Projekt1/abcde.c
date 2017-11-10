/*Napisz program, który wyznaczy ocenê na podstawie punktów zdobytych za kolokwium wed³ug nastêpuj¹cych regu³:
0-10pkt 2
11-13pkt 3
14-16pkt 4 
17-20 5
Program powinien przyjmowaæ z konsoli liczbê punktów w formie liczby ca³kowitej, 
a nastêpnie wyœwietlaæ ocenê. W przypadku b³êdnego wejœcia program powinien wyœwietliæ s³owo “Error”.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
	int a;
	printf("Wprowadz liczbe punktow z kolokwium, w zamian za to policze Ci czy zdales :-)\n");
	scanf("%d", &a);
	if(a>0&&a<21)
	{ 
		if (a > 0 && a < 11)
		{
			printf("Masz dwoje ;-(");
		}
		else
		{
			if (a > 10 && a < 14)
			{
				printf("Masz trojke, brawo!");
			}
			else
			{
				if (a > 13 && a < 17)
				{
					printf("Masz czworke, wysmienicie!");
				}
				else
				{
					if (a > 16)
					{
						printf("Masz piatke, gratulacje!");
					}
				}
			}
		}
	}
	else
	{
		printf("Error");
	}

	_getch();
	return 0;
}