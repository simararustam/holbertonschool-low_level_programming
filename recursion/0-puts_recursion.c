#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - entry point
 * @s: char pointer
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		i_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
