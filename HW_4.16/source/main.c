#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j;
	printf("(A)\n");
	for (i = 0;i < 10;i++)
	{
		for (j = 0;j <= i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("(B)\n");
	for (i = 0;i < 10;i++)
	{
		for (j = 10;j > i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("(C)\n");
	for (i = 0;i < 10;i++)
	{
		for (j = 0;j < 10;j++)
		{
			if (i <= j)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	printf("(D)\n");
	for (i = 0;i < 10;i++)
	{
		for (j = 9;j >= 0;j--)
		{
			if (j > i)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}