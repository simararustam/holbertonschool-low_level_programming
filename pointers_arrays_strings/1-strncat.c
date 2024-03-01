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
	char *result = malloc(sizeof(dest) + sizeof(src));

	result = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != 0 && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (result);
}
