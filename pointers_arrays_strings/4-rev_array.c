#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_array - entry point
 * @a: integer parametr
 * @n: ineteger parametr
 */

void reverse_array(int *a, int n)
{
	int i;
	char *result = malloc(sizeof(a));

	for (i = 0; i < n / 2; i++)
	{
		result[i] = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = result[i];
	}
}
