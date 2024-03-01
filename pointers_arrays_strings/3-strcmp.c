#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *_strcmp - entry point
 *Return: 0 succes
 *@s1: ptr 1
 *@s2: ptr 2
 */

int _strcmp(char *s1, char *s2)
{
	char dif = 0;
	int i = 0;

	while (*(s1 + i) != 0 || *(s2 + i) != 0)
	{
		dif = s1[i] - s2[i];
		if (dif != 0)
			return (dif);
		i++;
	}
	return (0);
}
