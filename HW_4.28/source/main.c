#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

void mode1();
void mode2();
void mode3();
void mode4();
int main()
{
	int num;
	while (1)
	{
		printf("Enter employee's number code (-1 to end): ");
		scanf("%d", &num);
		if (num == EOF)
			break;
		switch (num)
		{
			case 1 :
				mode1();
				break;
			case 2 :
				mode2();
				break;
			case 3 :
				mode3();
				break;
			case 4 :
				mode4();
				break;
			default :
				printf("Please enter an invalid code.\n");
		}
		printf("\n\n");
		
	}
	system("pause");
	return 0;
}

void mode1()
{
	float pay;
	printf("Enter the manager's pay: ");
	scanf("%f", &pay);
	printf("Weekly pay is: %.2f", pay);
}

void mode2()
{
	float rate,hour,pay;
	printf("Enter hourly worker's pay rate:");
	scanf("%f", &rate);
	printf("Enter the number of hours worked:");
	scanf("%f", &hour);
	if (hour > 40)
		pay = (hour - 40)*rate*0.5 + hour * rate;
	else
		pay = hour * rate;
	printf("Weekly pay is: %.2f", pay);
}

void mode3()
{
	float sale;
	printf("Enter commission employee's gross weekly sales: ");
	scanf("%f", &sale);
	printf("Weekly pay is: %.2f", 250 + sale * 0.057);
}

void mode4()
{
	int complete;
	float rate;
	printf("Enter the number of pieces completed: ");
	scanf("%d", &complete);
	printf("Enter the employee's per piece pay rate: ");
	scanf("%f", &rate);
	printf("Weekly pay is: %.2f", complete * rate);
}