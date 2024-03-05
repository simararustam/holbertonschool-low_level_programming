#include "main.h"
#include <stdio.h>
/**
 *_strlen_recursion - entry
 *@s: char
 *Return: value returned
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
}
