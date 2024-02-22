#include "main.h"

/**
 * main - check the code
 * Return: Always 0 
 */

void print_alphabet(void)
{
	char a[] = "abcdefghijklmnopqrstuvwxyz\n";

	int i = 0;

	int aLength = sizeof a / sizeof a[0]

	while (i <= aLength)
	{
		_putchar(a[i]);
		i++;
	}
}
