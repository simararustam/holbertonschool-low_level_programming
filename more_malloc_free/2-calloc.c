#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_calloc - entry point
 *@nmemb: size of arr
 *@size: size
 *Return: arr returned
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);
	while (i < (nmemb * size))
	{
		arr[i] = 0;
		i++;
	}

	return (arr);
}
