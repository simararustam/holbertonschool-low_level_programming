#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - returns nth node
 *@head: head of list
 *@index: nth index of node
 *Return: nth index of node returned
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL && i != index)
	{
		head = head->next;
		i++;
	}
	if (i == index)
		return (head);
	else
		return (NULL);
}
