#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 *add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *@head: head of list
 *@n: element
 *Return: adres of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	int i;

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->prev = *head;
	temp->next = NUll;

	*head = temp;

	return (temp);
}
