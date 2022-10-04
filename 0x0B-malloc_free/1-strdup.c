#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate string for new memory
 * @str: string to be passed
 * Return: returning  ptr
 */
char *_strdup(char *str)
{
	int x;
	int y;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (y = 0; str[y] != '\0'; y++)
			;
		ptr = malloc(y * sizeof(*ptr) + 1);
		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (x = 0; x < y; x++)
			{
				ptr[x] = str[x];
			}
		}
	}

	return (ptr);
}
