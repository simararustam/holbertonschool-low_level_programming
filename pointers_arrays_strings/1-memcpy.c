#include "main.h"
#include <stdio.h>
/**
 *_memdest - entry point
 *Return: 0 succes
 *@dest: pntr
 *@src: pntr
 *@n: integer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		*(src + i) = *(dest + i)
		i++;
	}
	return (dest);
}
