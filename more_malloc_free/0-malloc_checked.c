#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - entry point
 *@b: malloc size
 *Return: returned value
 */

void *malloc_checked(unsigned int b)
{
	char *a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
