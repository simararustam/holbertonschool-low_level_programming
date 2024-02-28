#include "main.h"
/**
 *_strcpy - entry point pointer
 *@src: char pointer
 *@dest: char pointer
 * Return: 0 succes
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
