#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - entry point
 * Description: This function prints the alphabet, in lowercase
 * @n: entry parametr
 * main - check the code
 * Return: Always 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("\n");
	}
	else if (n >= 98)
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("\n");
	}
}
