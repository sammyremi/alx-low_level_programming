#include "main.h"

/**
 * print_most_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void);
{
	for (int x = '0'; x <= '9'; x++)
	{
		if (x == '2' || x == '4')
		continue;

		_putchar(x);
	}
}
