#include <stdio.h>
/**
 *main - entry point
 *
 *Return: 0 succes
 */

int main(void)
{
int dig = '0';
char chr = 'a';

while (dig <= '9')
{
	putchar(dig);
	dig++;
}
while (chr <= 'f')
{
	putchar(chr);
	chr++;
}
	putchar('\n');

	return (0);
}
