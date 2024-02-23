#include "main.h"
#include <stdio.h>

/**
 * _abs - entry point
 * Description: This function prints the alphabet, in lowercase
 * @x: entry parametr
 * main - check the code
 * Return: Always 0
 */

int _abs(int x)
{

	if (x < 0)
	{
	x = x * (-1);
	printf("%d\n", x);
	}
	else
	printf("%d\n", x);

	return (0);
}
