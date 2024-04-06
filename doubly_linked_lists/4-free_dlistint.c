#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *free_dlistint - frees dlist_t list
 *@head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	head = NULL;
}
