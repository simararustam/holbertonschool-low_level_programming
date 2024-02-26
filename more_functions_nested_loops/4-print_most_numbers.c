#include "main.h"
/**
 * print_most_numbers - entry point
 * Description: This function prints the alphabet, in lowercase
 * main - check the code
 */

void print_most_numbers(void)
{
		int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
