#include "main.h"

/**
 * print_diagonal - from n equal _
 * @n: number of times to print chracter to screen
 * Return: Always 0
 */
void print_diagonal(int n)
{
	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		int x;

		for (x = 0; x < n; x++)
		{
			int y;

			for (y = 0; y <= x; y++)
			{
				if (y == x)
					_putchar('\\');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
