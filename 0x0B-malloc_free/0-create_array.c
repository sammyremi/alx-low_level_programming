#include <stdio.h>
#include "main.h"
/**
 * create_array - array that init char to array
 * @size: size of malloc
 * @c: char to allocate to memory
 */
char *create_array(unsigned int size, char c)
{
	char *ptr[size];
	int x;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		size = (sizeof(char) * size);
		for (x = 0; x < size; x++)
		{
			*(ptr + x) = c;
		}
	}

	return (ptr);
}
