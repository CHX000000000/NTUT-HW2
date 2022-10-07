#include <stdio.h>
#include <stdlib.h>

int main()
{
	int result, tenuse, side1, side2, hypo;
	for (side1 = 1; side1 < 500; side1++)
	{
		for (side2 = 1; side2 < 500; side2++)
		{
			for (hypo = 1; hypo <= 500; hypo++)
			{
				result = side1 * side1 + side2 * side2;
				tenuse = hypo * hypo;
				if (result == tenuse)
					printf("%4d %4d %4d\n", side1, side2, hypo);
			}
		}
	}
	system("pause");
	return 0;
}