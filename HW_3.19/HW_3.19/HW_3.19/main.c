#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int days;
	float principal, rate;
	while (1)
	{
		printf("Enter loan principal (-1 to end): ");
		scanf("%f", &principal);
		if (principal == EOF)
			break;
		printf("Enter interrest rate: ");
		scanf("%f", &rate);
		printf("Enter term of the loan in days: ");
		scanf("%d", &days);
		printf("The interest charge is $%.2f\n\n", principal * rate * days / 365);
	}
	system("pause");
	return 0;
}