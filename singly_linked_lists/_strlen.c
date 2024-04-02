#include <stdio.h>
#include <lists.h>
/**
 * _strlen - len functuin
 * @str: is str
 * Return: len of str
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != 0)
		i++;

	return (i);
}
