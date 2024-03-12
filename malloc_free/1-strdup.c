#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - main point
 *@str: string
 *Return: returned pointer
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	s = malloc(i + 1);

	if (s == NULL)
		return (NULL);

	i = 0;
	while (str[i] != 0)
	{
		s[i] = str[i];
		i++;
	}

	s[i] = '\0';

	return (s);
}
