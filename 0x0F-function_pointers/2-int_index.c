#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - search for integer
 * @array: array to be passed
 * @size: size of array
 * @cmp: function to compare
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x, y;
	
	if (size <= 0)
		return (-1);
	
	if (size && cmp != NULL && array != NULL)
	{

		for (x = 0; x < size; x++)
		{
			y = cmp(array[x]);
			if (y != 0)
				return (x);

		}
	}
	return (-1);
}
