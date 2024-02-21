#include <stdio.h>
/**
 *main - entry point
 *
 *Return: 0 succes
 */

int main(void)
{
int digit = '0';

while (digit <= '9')
{
putchar(digit);
digit++;
}
putchar('\n');
return (0);
}
