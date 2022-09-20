#include "main.h"
#include <stdio.h>
/**
 * puts2 - print everycharacter in a string
 * @str: var pointer, print to stdout
 * Return: Always 0
 */
void puts2(char *str)
{
	int x;

	for (x = 0; *(str + x) != '\0'; x++)
	{
		if (x % 2 == 0)
			_putchar(*(str + x));
	}
	printf("\n");

}
