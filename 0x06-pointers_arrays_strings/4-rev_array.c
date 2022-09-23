#include "main.h"
/**
 * reverse_array - reverse the content of a given array
 * @a: array with content
 * @n: number of element of array
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (y = 0; y < n / 2; y++)
	{
		x = a[y];
		a[y] = a[n - y - 1];
		a[n - y - 1] = x;
	}
}
