#include <stdio.h>
#include "main.h"

/**
 *print_chessboard - function
 *
 *@a: pntr
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			if (j == 8)
			{
				printf("\n");
			}
			printf("%c", a[i][j]);
		}
	}
}
