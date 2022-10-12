#include "function_pointers.h"
/**
 * array_iterator - execute function of element array
 * @size: size of array
 * @array: array to be passed
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;


	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
