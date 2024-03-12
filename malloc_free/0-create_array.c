#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - array creation
 * @size: size of array
 * @c: array element
 * Return: array returned
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr = malloc(size);

	if (size == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		if (arr == NULL)
		{
			printf("Can't allocate %d bytes (after %d calss)\n", size, i);

		}
		arr[i] = c;
		i++;
	}

	return (arr);
}
