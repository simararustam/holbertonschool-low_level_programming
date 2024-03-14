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
	char *arr;

	arr = malloc(nmemb * size);

	return (arr);
}
