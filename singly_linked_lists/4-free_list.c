#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *free_list - frees a list_t list.
 *@head: head of list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	tmp = *head;

	while (head)
	{
		head = head->next;
		free(tmp->str);
		free(tmp);
		tmp = head;
	}
}
