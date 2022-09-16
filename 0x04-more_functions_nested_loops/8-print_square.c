#include "main.h"

/**
 * print_square - printing # with putchar
 * @size: number to print
 * Return: Always 0
 */
void print_square(int size)
{
	int x;
	int y;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
