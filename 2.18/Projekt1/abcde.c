/*Napisz program, kt�ry wyznaczy ocen� na podstawie punkt�w zdobytych za kolokwium wed�ug nast�puj�cych regu�:
0-10pkt 2
11-13pkt 3
14-16pkt 4 
17-20 5
Program powinien przyjmowa� z konsoli liczb� punkt�w w formie liczby ca�kowitej, 
a nast�pnie wy�wietla� ocen�. W przypadku b��dnego wej�cia program powinien wy�wietli� s�owo �Error�.
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