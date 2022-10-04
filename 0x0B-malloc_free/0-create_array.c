#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - array that init char to array
 * @size: size of malloc
 * @c: char to allocate to memory
 * Return: returning  ptr
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(sizeof(char) * size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (x = 0; x < size; x++)
			{
				*(ptr + x) = c;
			}
		}
	}
	return (ptr);
}
