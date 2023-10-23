#include <stdio.h>
#include <stdlib.h>

int main()
{
	float sales, salary;
	printf("enter sales in dollars:");
	scanf("%f", &sales);
	if (sales < 0)
	{
		printf("%f", sales);
	}
	else
	{
		salary = 200 + sales * 0.09;
		printf("salary is %f\n", salary);
	}
	system("Pause");
}