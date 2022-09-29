#include "main.h"
/**
 * _print_rev_recursion - print character in reverse
 * @s: string to be passed in
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
