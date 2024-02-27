#include "main.h"
#include <stdio.h>
/**
 * print_triangle - entry poin
 * @size: variable
 */

void print_triangle(int size)
{
	int i, j, k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (k = size; k > i; k--)
			{
				_putchar(' ');
			}
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
