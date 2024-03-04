#include <stdio.h>
#include "main.h"

/**
 *_strstr - enrty point
 *@haystack: char
 *@needle: char
 *Return: NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*needle)
	{
		for (i = 0; haystack[i] != 0; i++)
		{
			if (*needle == haystack[i])
				return (needle);
		}
		needle++;
	}
	return (NULL);
}
