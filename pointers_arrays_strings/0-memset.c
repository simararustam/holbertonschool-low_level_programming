#include "main.h"
#include <stdio.h>

/**
 *_memset - entry point
 *Return: 0 succes
 *@s: pntr
 *@b: pntr
 *@n: integer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
