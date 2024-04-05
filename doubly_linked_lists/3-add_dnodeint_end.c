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
        dlistint_t *ptr, *temp = *head;

        ptr = malloc(sizeof(dlistint_t));

        if (ptr == NULL)
                return (NULL);

        ptr->next = NULL;
        ptr->n = n;

        if (*head)
        {
                while (temp->next)
                        temp = temp->next;

                temp->next = ptr;
                ptr->prev = temp;
        }
        else
        {
                ptr->prev = *head;
                *head = ptr;
        }

        return (ptr);
}
