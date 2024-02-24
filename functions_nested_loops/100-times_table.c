#include "main.h"
/**
 * print_times_table - entry point
 * Description: This function prints the alphabet, in lowercase
 * @n: integer
 * main - check the code
 * Return: Always 0
 */

void print_times_table(int n)
{
	int i, j, k;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;

			if (k <= 9)
			{
				if (j != 0)
				{
				_putchar (',');
				_putchar (' ');
				_putchar (' ');
				}
				_putchar (k + '0');

			}
			else if (k >= 10)
			{
				_putchar (',');
				_putchar (' ');
				_putchar ((k / 10) + '0');
				_putchar ((k % 10) + '0');
			}
		}
		_putchar ('\n');
	}
}
