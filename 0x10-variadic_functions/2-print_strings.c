#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print string followed by newline
 * @separator: char to seperate string
 * @n: string passed in
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *ch;
	va_list ap;

	va_start(ap, n);

	if (separator != NULL)
	{
		for (x = 0; x < n; x++)
		{
			ch = va_arg(ap, char*);
			if (ch == NULL)
				printf("(nil)");
			else
				printf("%s", ch);
			if (x != n - 1)
				printf("%s", separator);
		}
		va_end(ap);
		printf("\n");
	}
}
