#include "main.h"
#include <stdio.h>

/**
 *_strchr - entry point
 *@s: ptrn
 *@c: char
 *Return: 0 succes
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
