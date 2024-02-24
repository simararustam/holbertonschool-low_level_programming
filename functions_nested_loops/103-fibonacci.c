#include <stdio.h>

/**
 *main - entry point
 *
 *Return: 0 succes
 */

int main(void)
{
	unsigned long a = 0, b = 1, sum;
	float result;


	while (1)
	{
		sum = a + b;
		if (sum <= 4000000)
		{
			if (sum % 2 == 0)
			{
				result += sum;
			}
				a = b;
				b = sum;
		}
		else
		break;
	}

	printf("%.0f\n", result);

	return (0);
}
