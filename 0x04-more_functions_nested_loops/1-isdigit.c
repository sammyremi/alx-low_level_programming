#include "main.h"

/**
 * _isdigit - check for uppercase character
 * @x: return isdigit
 * Return: Always 0
 */
int _isdigit(int c)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		if (x == c)
		return (1);
	}
	return (0);
}
