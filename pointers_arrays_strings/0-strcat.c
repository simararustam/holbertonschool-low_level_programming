#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *_strcat - entry point
 *@dest: pointer dest
 *@src: pointer src
 *Return: 0 succes
 */

char *_strcat(char *dest, char *src)
{
	char *result = malloc(strlen(dest) + strlen(src) + 1);
	int i = 0;

	strcpy(result, dest);
	strcat(result, src);

	while (result[i] != '\0')
	{
		dest[i] = result[i];
		i++;
	}

	return (dest);
}
