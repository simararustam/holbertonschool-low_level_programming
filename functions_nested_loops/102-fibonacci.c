#include <stdio.h>

/**
 *main - entry point
 *
 *Return: 0 succes
 */

int main(void)
{
	int a = 1, b = 2, sum, i;

	printf("%d, %d, ", a, b);

	for (i = 1; i < 49; i++)
	{
		sum = a + b;
		printf("%d", sum);
		if (i == 48)
		{
			break;
		}
		printf(", ");
		a = b;
		b = sum;
	}
	printf("\n");

	return (0);
}
