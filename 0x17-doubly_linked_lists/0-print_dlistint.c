#include "lists.h"

/**
 * print_dlistint - print list
 * @h: pointer head
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++
	}
	return (x);
}
