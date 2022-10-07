#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float sale;
	while (1)
	{
		printf("Enter sales in dollar (-1 to end): ");
		scanf("%f", &sale);
		if (sale == EOF)
			break;
		printf("Salary is: $%.2f\n\n", sale * 0.09 + 200);
	}
	system("pause");
	return 0;
}