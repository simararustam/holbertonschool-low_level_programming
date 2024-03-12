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
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(size);

	if (arr == NULL)
		return (NULL);

	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
