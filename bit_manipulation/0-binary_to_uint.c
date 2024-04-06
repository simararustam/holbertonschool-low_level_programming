#include <stdio.h>
#include "main.h"
/**
 *binary_to_uint - coverts binary to unsigned int
 *@b: is pointing to string
 *Return: coverted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, num = 0, n = 1;
	
	if (b == NULL)
		return (0);

	for (i = 0; b[i] != 0; i++)
	{
		if (atoi(b[i]) == 1 || atoi(b[i]) == 0)
		{
			for (j = 1; j <= i; j++)
			{
				n *= 2;
			}
			num += n * atoi(b[i]);
		}
		else
			return (0);
	}
	
	return (num);
}
