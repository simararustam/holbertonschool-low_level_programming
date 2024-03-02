#include <stdio.h>
#include "main.h"
/**
 *cap_string - main point
 *@a: pointer
 *Return: 0 succes
 */
char *cap_string(char *a)
{
	int i = 0;

	while (a[i] != 0)
	{
		if (a[i] >= 97 && a[i] <= 122 && a[i - 1] < 48 && a[i -  1] != 45)
		{
			a[i] = a[i] - 32;
		}
		i++;
	}
	return (a);
}
