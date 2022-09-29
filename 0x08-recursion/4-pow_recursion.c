#include "main.h"
/**
 * _pow_recursion - return the power of function
 * @x: integer to check
 * @y: 2nd int to check
 * Return: power of num
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (-1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
