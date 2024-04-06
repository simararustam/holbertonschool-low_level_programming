#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data
 * @head: head of list
 * Return: sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum = head;
		head = head->next;
	}
	return (sum);
}
