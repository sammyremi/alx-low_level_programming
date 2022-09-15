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
	char c;
	int count = 0

	while (c <= 'Z')
	{
		if (_isupper(c))
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
