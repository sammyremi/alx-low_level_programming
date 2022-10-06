#include "main.h"
#include <limit.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocate memory to int
 * @b: unsigned int to assign mem
 * Return: return pointer
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(*ptr) * b);
	if (ptr == NULL)
	{
		exit(98);
	}
	else
		return (ptr);
}
