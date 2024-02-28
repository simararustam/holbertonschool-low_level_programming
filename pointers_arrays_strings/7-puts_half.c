#include "main.h"
/**
 *puts_half - entry point
 *@str: pointer
 */

void puts_half(char *str)
{
	int i, j, n, len;

	for (i = 0; str[i] != '\0'; i++)
	{
		len = i;
		len += 1;
	}
	n = len / 2;

	for (j = n; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');

}
