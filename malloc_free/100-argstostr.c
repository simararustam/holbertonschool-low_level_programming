#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *argstostr - main point
 *@ac: size of arr
 *@av: arr
 *Return: succes
 */
char *argstostr(int ac, char **av)
{
	char *concat;
	int i, size = 0, j = 0, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		j = 0;
	}

	concat = malloc(sizeof(char) * size + 1);
	if (concat == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (i < size)
	{
		while (av[j][k])
		{
			concat[i] = av[j][k];
			i++;
			k++;
		}
		j++;
		k = 0;
		concat[i] = '\n';
		i++;
	}
	concat[i] = '\0';
	return (concat);
}
