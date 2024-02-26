#include "main.h"
/**
 * print_diagonal - entry point
 * Description: This function prints the alphabet, in lowercase
 * @n: int variable
 * main - check the code
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0 ; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
}
