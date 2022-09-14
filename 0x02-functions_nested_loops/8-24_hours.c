#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * @x:number to be checked
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int x = 0;
	int y = 0;

	for (x = 0; x <= 23; x++)
	{
		for (y = 0; y <= 59; y++)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(':');
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar('\n');
		}
	}
}
