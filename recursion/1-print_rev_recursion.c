#include "main.h"
#include <stdio.h>
/**
 *_print_rev_recursion - entry
 *@s: char
 */

void _print_rev_recursion(char *s)
{
	if (*s == 0)
	{
		return;
	}
	else
	{
		s++;
		_print_rev_recursion(s);
	}
	putchar(*s);
}
