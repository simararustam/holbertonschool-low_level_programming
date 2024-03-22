#include <stdio.h>
#include "function_pointers.h"
/**
 *int_index - searches func
 *@array: arr
 *@size: sizeof arr
 *@cmp: func to ptr
 *Return: 0 succes
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
		else
			return (-1);
	}
	return (0);
}
