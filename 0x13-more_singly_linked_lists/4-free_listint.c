#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a list
 * @head: pointer to first element
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *point;

	while (head != NULL)
	{
		point = head;
		head = head->next;
		free(point);
	}
}
