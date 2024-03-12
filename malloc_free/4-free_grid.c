#include <stdio.h>
#include <stdlib.h>
/**
 *free_grid - entry point
 *@grid: di arr ptr
 *@height: height of arr
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
