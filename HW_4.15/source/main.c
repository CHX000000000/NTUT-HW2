#define investment 5000
#define year 15

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float remuneration,rate[] = { 0.1 , 0.105 , 0.11 , 0.1159 , 0.12 };
	int i, j;
	for (i = 0;i < (sizeof(rate) / sizeof(rate[0])); i++)
	{
		printf("Year\tRemuneration\n");
		for (j = 1;j <= year; j++)
		{
			remuneration = investment * pow(1 + rate[i],j);
			printf("%2d\t%9.2f\n",j, remuneration);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}