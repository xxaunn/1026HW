#include <stdio.h>
#include <stdlib.h>

int main()
{
	int hour;
	float rate;
	printf("enter # of hours worked:");
	scanf("%d", &hour);
	if (hour < 0) 
	{
		printf("%d\n", hour);
	}
	else
	{
		printf("enter hourly rate of the worker:");
		scanf("%f", &rate);
		printf("salary is %f", hour*rate);
	}
	system("Pause");
}