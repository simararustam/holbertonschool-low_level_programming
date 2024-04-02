#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *add_node_end - adds a new node at the end of a list_t
 *@head: start of list
 *@str: data
 *Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *tmp;
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	temp = malloc(sizeof(list_t));

	if (!temp)
		return (NULL);

	temp->str = strdup(str);
	temp->len = i;
	temp->next = NULL;

	tmp = *head;
	if (*head)
	{
		while (tmp->next)
			tmp->next;
		tmp->next = temp;
	}
	else
		*head = temp;
	return (temp);
}
