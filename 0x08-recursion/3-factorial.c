#include "main.h"
/**
 * factorial - return factorial of given number
 * @n: integer to check
 * Return: factorial num
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
