#include <stdio.h>
#include "main.h"
/**
 * alloc_grid - allocate memmory to 3d array
 * @width: int of row
 * @height: int of col
 * Return: return pointer of 2d array
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/*allocate mem to ptr*/
	ptr = malloc(height * sizeof(*ptr));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(**ptr));
		if (ptr[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(ptr[i]);
			}
			free(ptr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
