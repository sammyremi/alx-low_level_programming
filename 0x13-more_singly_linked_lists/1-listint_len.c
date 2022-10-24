#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - linked list
 * @h: node
 * Return: num of node
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *police = NULL;
	int node = 0;

	police = h;

	while (police != NULL)
	{
		node++;
		police = police->next;
	}
	return (node);
}
