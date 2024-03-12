#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - main point
 *@str: string
 *Return: returned pointer
 */
char *_strdup(char *str)
{
	char *dubli;

	if (str == NULL)
		return (NULL);

	dubli = malloc(sizeof(str));

	if (dubli == NULL)
		return (NULL);

	dubli = str;
	return (dubli);
}
