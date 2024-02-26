#include "main.h"
#include <stdio.h>
/**
 * mul - entry point
 * Description: This function prints the alphabet, in lowercase
 * @a: int variable
 * @b: second variable
 * main - check the code
 * Return: Always 0
 */

int mul(int a, int b)
{
	unsigned long sum;

	sum = a * b;

	printf("%ld", sum);

	return (0);
}
