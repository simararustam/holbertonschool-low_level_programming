#include <stdio.h>

/**
 *main - entry point
 *
 *Return: 0 succes
 */

int main(void)
{
	unsigned long a = 1, b = 2, sum;
	int i;

	printf("%ld, %ld", a, b);

	for (i = 1; i < 49; i++)
	{
		sum = a + b;
		printf(", %ld", sum);

		a = b;
		b = sum;
	}
	printf("\n");

	return (0);
}
