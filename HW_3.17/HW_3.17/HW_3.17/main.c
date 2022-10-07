#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	float begin_balance, charge, credit, limit, new_balance;
	while (1)
	{
		printf("Enter account number (-1 to end): ");
		scanf("%d",&num);
		if(num == EOF)
			break;
		printf("Enter beginning balance: ");
		scanf("%f", &begin_balance);
		printf("Enter total charges: ");
		scanf("%f", &charge);
		printf("Enter total credits: ");
		scanf("%f", &credit);
		printf("Enter credit limit: ");
		scanf("%f", &limit);
		new_balance = begin_balance + charge - credit;
		if (new_balance > limit)
		{
			printf("Account:\t%d\n",num);
			printf("Credit limit:\t%.2f\n", limit);
			printf("Balance:\t%.2f\n", new_balance);
			printf("Credit Limit Exceeded.\n");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
