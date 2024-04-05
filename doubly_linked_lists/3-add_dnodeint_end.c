#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *@head: head of list
 *@n: value of node
 *Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *temp;

	ptr = malloc(sizeof(dlistint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;
	
	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
	
	    temp = *head;
	    while (temp->next != NULL)
		    temp = temp->next;

	temp->next = ptr;


	return (ptr);
}
