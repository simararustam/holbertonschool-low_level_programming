#include "main.h"
/**
 *_strcpy - entry point pointer
 *@src: char pointer
 *@dest: char pointer
 * Return: 0 succes
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
