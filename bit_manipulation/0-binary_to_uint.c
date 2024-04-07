#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 *binary_to_uint - coverts binary to unsigned int
 *@b: is pointing to string
 *Return: coverted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, num = 0, len = 0;
	
	if (!b)
		return (0);
	while (b[i] != 0)
	{
		len++;
		i++;
	}

	while (b[i])
	{
		if (b[i] == '1' || b[i] == '0')
		{
			num += (b[i] - '0') << (len - 1 - i);
		}
		else
			return (0);
		i++;
	}
	
	return (num);
}
