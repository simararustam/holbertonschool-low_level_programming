#include "main.h"

/**
 * print_sign - entry point
 * Description: This function prints the alphabet, in lowercase
 * @n: entry parametr
 * main - check the code
 * Return: Always 0
 */


int print_sign(int n)
{
	if (n > 0)
	{
	return (1);
	_putchar('+');
	}
	else if (n == 0)
	{
	return (0);
	_putchar('0');
	}
	else
	{
	return (-1);
	_putchar('-');
	}


	return (0);
}
