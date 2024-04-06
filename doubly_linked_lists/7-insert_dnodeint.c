#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *insert_dnodeint_at_index -  inserts a new node at a given position
 *@h: head of list
 *@idx: index of list
 *@n: given value
 *Return: adress of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *old;
	unsigned int a;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	old = *h;

	for (a = 0; old != NULL && a < idx; a++)
		old = old->next;

	if (old == NULL && a == idx)
		return (add_dnodeint_end(h, n));

	else if (old != NULL)
	{
		new = malloc(sizeof(dlistint_t));

		if (new == NULL)
			return (NULL);
		new->n = n;
		old->prev->next = new;
		new->prev = old->prev;
		old->prev = new;
		new->next = old;

		return (new);
	}
	return (NULL);
}
