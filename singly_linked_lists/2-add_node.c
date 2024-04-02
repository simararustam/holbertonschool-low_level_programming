#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *add_node - adds a new node at the beginning of a list_t
 *@head: head of list
 *@str: value of node
 *Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	temp = malloc(sizeof(list_t));

	if (!temp)
		return (NULL);
	temp->str = strdup(str);
	temp->len = i;
	temp->next = *head;

	*head = temp;

	return (temp);
}
