#include "main.h"
/**
 * print_last_digit - entry point
 * Description: This function prints the alphabet, in lowercase
 * @x: entry parametr
 * main - check the code
 * Return: Always 0
 */

int print_last_digit(int x)
{
	if (x < 0)
	{
	x = (-1) * x;
	x = x % 10;
	_putchar (x + '0');
	return (x);
	}
	else
	{
	x = x % 10;
	_putchar (x +'0');
	return (x);
	}

}
