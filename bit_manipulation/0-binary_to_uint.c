#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
  * binary_to_uint - binary to unsigned int convertor
  * @b: binary data
  * Return: unsigned integer if sucess if not 0
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		value = value << 1;
		if (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			value = value | 1;
		b++;
	}
	return (value);
}
