#include <stdio.h>

/**
 * main - entry point
 *
 *Return: 0 succes
 */

int main(void)
{
	int i, sum;

	for (i = 3; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
}
