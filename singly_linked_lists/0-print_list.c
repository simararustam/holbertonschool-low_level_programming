#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *print_list - print the all elemets
 *@h: list
 *Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
