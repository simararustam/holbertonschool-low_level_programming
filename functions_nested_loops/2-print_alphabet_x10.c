#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * Description: This function prints the alphabet, in lowercase
 * main - check the code
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char a[] = "abcdefghijklmnopqrstuvwxyz\n";

	int i = 0, j = 0;

	while (j <= 9)
	{
	while (a[i] != '\0')
	{
		_putchar(a[i]);
		i++;
	}
	}

}
