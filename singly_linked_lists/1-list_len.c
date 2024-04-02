#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <stding.h>

/**
 *list_len - number of elemments in link list
 *@h: list
 *Return: number of elements in linked list
 */

size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
