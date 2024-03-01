#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *_strcmp - entry point
 *Return: 0 succes
 *@s1: ptr 1
 *@s2: ptr 2
 */

int _strcmp(char *s1, char *s2)
{
	int a = *s1 - *s2;

	return (a);
}
