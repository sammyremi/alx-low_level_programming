#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - linked list
 * @h: node
 * Return: num of node
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *police = NULL;
	int node = 0;

	police = h;

	while (police != NULL)
	{
		if (police == NULL)
			printf("0");
		else
			printf("%d\n", police->n);
		node++;
		police = police->next;
	}
	return (node);
}
