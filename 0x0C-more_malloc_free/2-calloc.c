#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocate memory for an array
 * @nmemb: the int n
 * @size: size of int
 * Return: return pointer ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int x;
	int y;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	y = (nmemb * size);

	for (x = 0; x < y; x++)
		*(ptr + x) = 0;

	return (ptr);
}
