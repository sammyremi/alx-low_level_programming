#include "main.h"

/**
 * islower - Entry point
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	int r = 'a';

	for (r = 'a'; r <= 'z'; r++)
	{
		if (c == r)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	_putchar('\n');
	return (0);
}
