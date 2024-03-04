#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - entry point
 *@a: int
 *@size: size of array
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + size * i + i);
		sum2 += *(a + size * i + size - i - 1);
	}
	printf("%d,", sum1);
	printf("%d\n", sum2);
}
