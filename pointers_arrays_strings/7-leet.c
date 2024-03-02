#include "main.h"
#include <stdio.h>

/**
 *leet - entry point
 *Return: succes
 *@s: pointer param
 */

char *leet(char *s)
{
	char a[] = { 'a', 'e', 'o', 't', 'l' };
	char n[] = { 4, 3, 0, 7, 1 };
	int i = 0, j;

	while (s[i] != 0)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == a[j] || s[i] == a[j] - 32)
				s[i] = n[j] + '0';
		}
		i++;
	}
	return (s);
}
