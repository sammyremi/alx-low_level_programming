#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - create array range
 * @min: minmum int
 * @max: maximum num int
 * Return: return array range
 */
int *array_range(int min, int max)
{
	int x;
	int *ptr;
	int y;

	if (min > max)
		return (NULL);

	y = max - min;

	ptr = malloc(y * sizeof(int) + 1);

	if (ptr == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
	{
		ptr[x] = min;
		min++;
	}

	return (ptr);
}
