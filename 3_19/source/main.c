#include <stdio.h>
#include <stdlib.h>

int main() 
{
	float loan, rate;
	int days;
	printf("enter loan principal:");
	scanf("%f", &loan);
	if (loan < 0)
	{
		printf("%f", loan);
	}
	else
	{
		printf("enter interest rate:");
		scanf("%f", &rate);
		printf("enter term of the loan in days:");
		scanf("%d", &days);
		printf("the interest charge is %f", loan*rate*days / 365);
		system("Pause");
	}

}