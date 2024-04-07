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
	unsigned int num = 0;
	int i = 0, len = 0;

	if (!b)
		return (0);
	for (; b[i] != 0; i++)
	{
		len++;
	}

	while (b[i])
	{
		if (b[i] > '1' || b[i] < '0')
			return (0);

		num += (b[i] - '0') << (len - 1 - i);
		i++;
	}

	return (num);
}
