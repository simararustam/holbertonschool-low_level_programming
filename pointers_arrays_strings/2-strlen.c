#include "main.h"
/**
 * _strlen - entry point
 * Return: 0 succes
 * @s: pointer
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
