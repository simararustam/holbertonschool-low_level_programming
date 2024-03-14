#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *string_nconcat - entry point
 *@s1: 1st str
 *@s2: 2nd str
 *@n: int
 *Return: value
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *concat;
	char *byte = malloc(n);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; i < n; i++)
	{
		byte[i] = s2[i];
	}
	concat = malloc(sizeof(s1) + sizeof(byte));
	
	if (concat == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != 0)
	{
		concat[i] = s1[i];
		i++;
	}

	j = 0;
	while (byte[j] != 0)
	{
		concat[i] = byte[j];
		i++;
		j++;
	}
	concat[i] = '\0';

	return (concat);
}
