#include "main.h"
#include <stdio.h>
/**
 * string_toupper - check the code
 *
 * Return: Always 0.
 * @a: pointer
 */

char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != 0)
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] = a[i] - 32;
		}
		i++;
	}
	return (a);
}
