#include "main.h"
/**
 * times_table - entry point
 * Description: This function prints the alphabet, in lowercase
 * main - check the code
 * Return: Always 0
 */

void times_table(void)
{
		int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;

			if (k <= 9)
			{
				_putchar (k + '0');
				if (j == 9)
				{
					break;
				}
				_putchar (',');
				_putchar (' ');
				_putchar (' ');

			}
			else if (k >= 10)
			{
				_putchar ((k / 10) + '0');
				_putchar ((k % 10) + '0');
				if (j == 9)
				{
					break;
				}
				_putchar (',');
				_putchar (' ');
			}
		}
		_putchar ('\n');
	}
}
