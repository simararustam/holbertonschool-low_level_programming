#include <stdio.h>
/**
 *main - entry point
 *
 *Return: 0 succes
 */

int main(void)
{
	char lower = 'z';

	while (lower >= 'a')
	{
	putchar(lower);
	lower--;
	}
	putchar('\n');

	return (0);
}
