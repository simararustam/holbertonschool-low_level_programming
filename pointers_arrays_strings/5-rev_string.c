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

	n = (lastindex - 1);

	
		for (j = 0; j <= n / 2; j++)
		{
			rev = s[j];
			s[j] = s[lastindex - j];
			s[lastindex - j] = rev;
		}
	
}
