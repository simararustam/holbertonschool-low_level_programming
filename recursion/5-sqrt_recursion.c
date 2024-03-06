#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - enrty point
 * check: checker
 * @start: int
 * @n: int
 * Return: Always 0.
 */

int check(int start, int n)
{
	if (start * start == n)
		return (start);

	if (start * start > n)
		return (-1);

	return (check(start + 1, n));
}

int _sqrt_recursion(int n)
{
	return (check(1, n));
}
