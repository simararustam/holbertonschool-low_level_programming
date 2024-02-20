#include <stdio.h>
/**
 *main - entry
 *Return: 0 succes
 */

int main(void)
{
	char alph = 'a';
	char alph_ = 'A';

	while (alph <= 'z')
	{
	putchar(alph);
	alph++;
	}
	while (alph_ <= 'Z')
	{
	putchar(alph_);
	alph_++;
	}
	putchar('\n');
	return (0);
}
