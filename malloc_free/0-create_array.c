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
	else
	{
		while (i < size)
		{
			arr[i] = c;
			i++;
		}
	}
	return (arr);
}
