#include "main.h"

/**
 * isupper - check for uppercase character
 * @c: return upercase
 * Return: Always 0
 */
int _isupper(int c)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		if (x == c)
		return (1);
	}
	return (0);
}
