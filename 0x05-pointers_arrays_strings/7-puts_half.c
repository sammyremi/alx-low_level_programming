#include "main.h"
#include <stdio.h>
/**
 * puts_half - print half of a string
 * @str: var pointer, print to stdout
 * Return: Always 0
 */
void puts_half(char *str)
{
	int x;

	for (x = 0; *(str + x) != '\0'; x++)
		;
		x++;
	for (x /= 2; *(str + x) != '\0'; x++)
	{
		_putchar(*(str + x));
	}
	_putchar('\n');

}
