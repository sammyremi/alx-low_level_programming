#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - linked list
 * @h: node
 * Return - num of node
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *police;
	int node = 0;

	police = h;

	while (police->next != NULL)
	{
		printf("%d\n", police->n);
		node++;
		police = police->next;
	}
	printf("%d\n", police->n);
	node++;
	return (node);
}
