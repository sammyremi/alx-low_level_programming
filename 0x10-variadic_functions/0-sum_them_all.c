#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - sum number of n passed
 * @n: num of list arg
 * Return: return sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, x;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);
	sum = 0;
	for (x = 0; x < n; x++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
