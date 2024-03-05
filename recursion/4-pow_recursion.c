#include "main.h"
#include <stdio.h>
/**
 *_pow_recursion - entry
 *@x: int 1
 *@y: int 2
 *Return: returned value
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	return (x * _pow_recursion(x, y - 1));
}
