#include "main.h"

/**
 * print_line - from n equal _
 * @n: integer to count for times to print
 * Return: Always 0
 */
void print_line(int n)
{
	int x;

	for (x = 0; x <= n; x++)
	{
		if (x <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
