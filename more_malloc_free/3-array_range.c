#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_range - arr creator
 *@min: min value
 *@max: max value
 *Return: arr
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size, n;

	if (min > max)
		return (NULL);

	size = max - min;
	arr = malloc((size + 1) * sizeof(int));
	i = 0;
	n = min;
	while (n <= max)
	{
		arr[i] = n;
		i++;
		n++;
	}

	return (arr);
}
