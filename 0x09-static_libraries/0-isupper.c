#include "main.h"

/**
 * _isupper - check for uppercase character
 * @c: return upercase
 * Return: Always 0
 */
int _isupper(int c)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		if (x == c)
		return (1);
	}
	return (0);
}
