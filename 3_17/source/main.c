#include <stdio.h>
#include <stdlib.h>

int main()
{
	int account;
	float begin,charge,credit,limit;
	float nb;
	printf("enter account number:");
	scanf("%d", &account);
	if (account < 0) 
	{
		printf("%d\n", account);
	}
	else if (account >= 0) 
	{
	printf("enter beginning balance:");
	scanf("%f", &begin);
	printf("enter total charges:");
	scanf("%f", &charge);
	printf("enter total credits:");
	scanf("%f", &credit);
	printf("enter credit limit:");
	scanf("%f", &limit);
	nb = begin + charge - credit;
	printf("account:\t%d\n", account);
	printf("credit limit:\t%f\n", limit);
	printf("balance:\t%f\n", nb);
	if (nb > limit)
		printf("credit limit exceeded.");
	}
	
	system("Pause");
}