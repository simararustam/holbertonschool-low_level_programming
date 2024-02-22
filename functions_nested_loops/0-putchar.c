#include "main.h"
/**
 *main - entry pont
 *
 *Return: 0 succes
 */

int main(void)
{
	char b[] = "_putchar\n";

	int i = 0;

	while (b[i] != '\0')
	{
		_putchar(b[i]);
		i++;
	}

	return (0);
}
