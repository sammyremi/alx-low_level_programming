#include "main.h"
/**
 * _puts_recursion - printing a string followed by a newline
 * @s: string to be passed in
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
