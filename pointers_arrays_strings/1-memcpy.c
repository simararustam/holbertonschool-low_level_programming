#include "main.h"
#include <stdio.h>
/**
 *_memcpy - entry point
 *Return: 0 succes
 *@dest: pntr
 *@src: pntr
 *@n: integer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
