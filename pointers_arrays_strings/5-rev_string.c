#include "main.h"
/**
 * rev_string - entry point
 * @s: pointer
 */

void rev_string(char *s)
{
	int i, lastindex, j, rev, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		lastindex = i;
	}

	n = lastindex / 2;

	if (lastindex % 2 == 1)
		n++;

	{
		for (j = 0; j <= n; j++)
		{
			rev = s[j];
			s[j] = s[lastindex - j];
			s[lastindex - j] = rev;
		}
	}
}
