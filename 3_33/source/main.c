#include <stdio.h>
#include <stdlib.h>

int main()
{
	int length, breadth;
	int i, j;
	printf("enter length:");
	scanf("%d", &length);
	printf("enter breadth:");
	scanf("%d", &breadth);
	for (i = 1;i <= length;i++) 
	{
		for (j = 1;j <= breadth;j++) 
		{
			if ((i == 1) || (i == length) || (j == 1) || (j == breadth))
				printf("*");
			if ((i != 1) && (i != length) && (j != 1) && (j != breadth))
				printf(" ");
		}
		printf("\n");
	}
	system("Pause");
}