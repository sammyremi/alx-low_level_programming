#include "main.h"
#include <stdio.h>
/**
 * print_array - print half of a string
 * @a: var pointer
 * @n: variable int
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0;  x < n; x++)
	{
		if (x != n - 1)
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	}
	_putchar(10);

}
