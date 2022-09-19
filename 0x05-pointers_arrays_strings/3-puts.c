#include "main.h"
#include <stdio.h>
/**
 * _puts - printing a string with newline
 * @str: var pointer, print to stdout
 * Return: Always 0
 */
void _puts(char *str)
{
	char *x;

	x = str;
	while (x != '\0')
	{
		printf("%c", x);
	}

	putchar('\n');
}
