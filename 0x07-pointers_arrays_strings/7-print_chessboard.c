#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - print chess board
 * @a: pointer
 * Return: returning void
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, m = 0;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			m = 1;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - m]);
	}
	_putchar('\n');
}
