#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - add node at the beginning
 * @head: head to node
 * @n: num to add.
 * Return - newnode pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->next = *head;
	newnode->n = n;
	*head = newnode;

	return (newnode);
}
