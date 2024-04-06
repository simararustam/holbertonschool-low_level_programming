#include "lists.h"
#include <stdio.h>
/**
 *insert_dnodeint_at_index -  inserts a new node at a given position
 *@h: head of list
 *@idx: index of list
 *@n: given value
 *Return: adress of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *prev_node;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	prev_node = *h;

	for (i = 0; prev_node != NULL && i < idx; i++)
		prev_node = prev_node->next;

	if (prev_node == NULL && i == idx)
		return (add_dnodeint(h, n));
	else if (prev_node != NULL && i == idx)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		prev_node->prev->next = new;
		new->prev = prev_node->prev;
		prev_node->prev = new;
		new->next = prev_node;

		return (new);
	}

	return (NULL);
}
