#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *_strncat - entry point
 *@dest: pointer
 *@src: pinter
 *@n: integer
 *Return: entry point
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;
	char *result = malloc(sizeof(dest) + sizeof(src));
	char second[n];

	while (dest[i] != '\0')
	{
		result[j] = dest[i];
		i++;
		j++;
	}

	i = 0;
	for (i = 0; i < n; i++)
	{
		second[i] = src[i];
	}
	if (sizeof(src) < n)
	{
		second[i] = '\0';
	}

	i = 0;
	while (second[i] != '\0')
	{
		result[j] = second[i];
		i++;
		j++;
	}

	i = 0;
	while (result[i] != '\0')
	{
		dest[i] = result[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
