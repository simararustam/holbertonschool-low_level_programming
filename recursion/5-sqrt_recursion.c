#include "main.h"
#include <stdio.h>

/**
 * check - checker
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

/**
 * _sqrt_recursion - return the natural square root of a number n.
 * @n: number to check for square roots.
 * Return: the natural square root of number n
 */

int _sqrt_recursion(int n)
{
	return (check(1, n));
}
