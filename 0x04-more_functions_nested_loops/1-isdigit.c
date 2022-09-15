#include "main.h"

/**
 * _isdigit - Entry point
 *
 * @c:number to be checked
 *
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	for (int x = 0; x < 10; x++)
	{
		if (x == c)
		return (1);
	}
	return (0);
}
