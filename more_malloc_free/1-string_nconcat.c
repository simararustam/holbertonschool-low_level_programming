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
	unsigned int i, j, len, size;
	char *concat;
	char *empty = "";

	if (s1 == NULL)
		s1 = empty;

	if (s2 == NULL)
		s2 = empty;

	len = 0;
	while (s1[len] != 0)
		len++;

	size = (len + n) * sizeof(*concat);

	concat = malloc(size + 1);

	if (concat == NULL)
		return (NULL);

	i = 0;
	while (i < size && s1[i] != 0)
	{
		concat[i] = s1[i];
		i++;
	}

	j = 0;
	while (i < size && s2[j] != 0)
	{
		concat[i] = s2[j];
		i++;
		j++;
	}
	concat[i] = '\0';

	return (concat);
}
