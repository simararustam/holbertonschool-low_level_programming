#include "main.h"
#include <stdio.h>
/**
 * print_rev - entry point
 *
 * @s: pointer
 */

void print_rev(char *s)
{
	int i, len, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		len = i;
		len += 1;
	}
	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
