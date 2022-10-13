#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print numbers followed by newline
 * @separator: separator for number
 * @n: list of num
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int y, x;
	va_list ap;

	va_start(ap, n);

	if (separator != NULL)
	{
		for (y = 0; y < n; y++)
		{
			x = va_arg(ap, int);
			printf("%d", x);
			if (y != n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
