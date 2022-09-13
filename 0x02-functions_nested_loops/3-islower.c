#include "main.h"

/**
 * _islower - Entry point
 *
 *@c:character to be checked with the function _islower
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	char r;

	for (r = 'a'; r <= 'z'; r++)
	{
		if (c == r)
		{
			return (1);
		}
	}
	return (0);
}
