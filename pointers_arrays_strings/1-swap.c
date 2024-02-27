#include "main.h"
/**
 * swap_int - entry point
 *
 * @a: pointer
 * @b: 2nd pointer
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
