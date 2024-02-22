#include "main.h"

/**
 * main - check the code
 * Return: Always 0.
 * print_alphabet: is a function
 */

void print_alphabet(void)
{
	char a[] = "abcdefghijklmnopqrstuvwxyz";

	int i = 0;

	while (i != '\n')
	{
		putchar(a[i]);
		i++;
	}

	return (0);
}
