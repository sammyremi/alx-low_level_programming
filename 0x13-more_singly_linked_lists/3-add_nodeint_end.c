#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - add node at end of list
 * @head: head to node
 * @n: node value
 * @Return - newnaddress
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temptr;

	newnode = malloc(sizeof(listint_t));
	temptr  = *head;
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		temptr = *head;
		while (temptr != NULL)
		{
			temptr = temptr->next;
		}
		temptr->next = newnode;
	}
	return (newnode);
}
