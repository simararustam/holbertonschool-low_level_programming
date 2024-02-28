#include "main.h"
/**
 *_strcpy - entry point pointer
 *@src: char pointer
 *@dest: char pointer
 * Return: 0 succes
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
    	{
        	dest[i] = src[i];
        	i++;
    	}
	return (dest);
}
