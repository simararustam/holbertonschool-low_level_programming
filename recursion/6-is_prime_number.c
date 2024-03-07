#include "main.h"
#include <stdio.h>
/**
 *helper - entry
 *@start: start point
 *@mid: midle of n
 *@n: given number
 *Return: value returned
 */
int helper(int start, int mid, int n)
{
	if ((n % start == 0 && start <= mid) || n < 0 || n == 1)
	{
		return (0);
	}
	else if (n % start != 0)
	{
		return (helper(start + 1, mid, n));
	}
	else
		return (1);
}

/**
 *is_prime_number - enrty point
 *@n: given number
 *Return: returned value
 */
int is_prime_number(int n)
{
	return (helper(2, n / 2, n));
}
