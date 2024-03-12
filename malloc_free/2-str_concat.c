#include <stdio.h>
#include <stdlib.h>
/**
 *str_concat - entry point
 *@s1: 1st string
 *@s2: 2nd
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i = 0, j = 0;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	while (s1[i] != 0)
		i++;

	while (s2[j] != 0)
		j++;

	concat = malloc(i + j + 1);

	if (concat == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != 0)
	{
		concat[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != 0)
	{
		concat[i] = s2[j];
		i++;
		j++;
	}
	concat[i] = '\0';

	return (concat);
}
