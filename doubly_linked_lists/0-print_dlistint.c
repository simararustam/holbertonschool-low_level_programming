#include <stdio.h>
#include "lists.h"
/**
 *print_dlistint - prints all the elements of a dlistint_t list
 *@h: head of list
 *Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
