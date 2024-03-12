#include <stdio.h>
#include <stdlib.h>
/**
 *alloc_grid - entry point
 *@height: height of arr
 *@width: width of arr
 *Return: 0 succes
 */
int **alloc_grid(int width, int height)
{
	int **di_arr;
	int i = 0, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	di_arr = malloc(height * sizeof(int));

	if (di_arr == NULL)
		return (NULL);

	while (i < height)
	{
		di_arr[i] = malloc(width * sizeof(int));
		if (di_arr[i] == NULL)
		{
			return (NULL);
		}
		i++;
	}

	for (; i < height; i++)
		for (j = 0; j < width; j++)
			di_arr[i][j] = 0;

	return (di_arr);
}
