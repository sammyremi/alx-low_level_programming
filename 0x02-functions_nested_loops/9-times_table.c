#include "main.h"

/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int tab = 9;
	int a;
	int i = 0;
	int k = 1;

	for (i = 0; i <= tab; i++)
	{
		_putchar('0');
		for (k = 1; k <= tab; k++)
		{
			_putchar(',');
			_putchar(' ');

			a = i * k;
			if (a <= 9)
			{
				_putchar(' ');
			}
			else
			_putchar(((i * k) / 10) + '0');
			_putchar(((i * k) % 10) + '0');
		}
		_putchar('\n');
	}
}
