#include "main.h"
#include <stdio.h>
/**
 * _puts - printing a string with newline
 * @str: var pointer, print to stdout
 * Return: Always 0
 */
void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		printf("%c", str[x])
	}
	printf("\n");

}
