#include <stdio.h>
/**
 *main - entry point
 *Return: 0 succes
 */

int main(void)
{
char alph = 'a';

while (alph <= 'z')
{
	if (alph != 'q' && alph != 'e')
	{
	putchar(alph);
	}

	alph++;
}
	putchar('\n');
	return (0);
}
