#include "main.h"
#include <stdio.h>
/**
 *factorial - entry point
 *@n: integer
 *Return: returned value
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	return (n * factorial(n - 1));
}
