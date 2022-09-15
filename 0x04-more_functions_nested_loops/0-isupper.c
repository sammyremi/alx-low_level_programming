#include "main.h"

/**
 * _isupper - Entry point
 *
 * @c:number to be checked
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	int y = 'A';

	while (y <= 'Z')
	{
		if (y == c)
		return (1);
	}
	return (0);
}
