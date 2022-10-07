#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, temp = 4, temp2=1;;
	for (i = 0;i < 5;i++)
	{
		for (j = 1;j <= temp;j++)
			printf(" ");
		for (j = 0;j < temp2;j++)
			printf("*");
		temp--;
		temp2 += 2;
		printf("\n");
	}
	temp2 = 7;
	temp = 1;
	for (i = 0;i < 4;i++)
	{
		for (j = 1;j <= temp;j++)
			printf(" ");
		for (j = 0;j < temp2;j++)
			printf("*");
		temp++;
		temp2 -= 2;
		printf("\n");
	}
	system("pause");
	return 0;
}