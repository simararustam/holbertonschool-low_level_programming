#include <stdio.h>
#include "lists.h"
/**
 *@h: header of list
 *dlistint_len - he number of elements in a linked dlistint_t list.
 *Return:
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}

	return (i);
}
