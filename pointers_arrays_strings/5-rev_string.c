#include "main.h"
/**
 * rev_string - entry point
 * @s: pointer
 */

void rev_string(char *s)
{
	int i, lastindex, j, rev;

	for (i = 0; s[i] != '\0'; i++)
	{
		lastindex = i;
	}

	if (lastindex != 0)
	{
	for (j = 0; j <= lastindex / 2; j++)
	{
		rev = s[j];
		s[j] = s[lastindex - j];
		s[lastindex - j] = rev;
	}
	}
}
