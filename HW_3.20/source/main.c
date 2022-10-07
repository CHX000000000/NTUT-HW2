#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int hour;
	float rate,salary;
	while (1)
	{
		printf("Enter # of hours worked (-1 to end): ");
		scanf("%d", &hour);
		if (hour == EOF)
			break;
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf("%f", &rate);
		if (hour > 40)
			salary = (hour - 40) * rate * 0.5 + hour * rate;
		else
			salary = hour * rate;
		printf("Salary is $%.2f\n\n", salary);
	}
	system("pause");
	return 0;
}