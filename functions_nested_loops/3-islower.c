#include "main.h"

/**
 * _islower - entry point
 * Description: This function prints the alphabet, in lowercase
 * @c: entry parametr
 * main - check the code
 * Return: Always 0
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
	_putchar('1');
	}
	else
	{
	_putchar('0');
	}

	return (0);
}
