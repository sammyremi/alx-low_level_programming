#include "main.h"
#include <stdio.h>
/**
 * print_rev - printing a string with newline rev
 * @s:string to be passed to print reverse
 * Return: Always 0
 */
void print_rev(char *s)
{
	int x;

	x = strlen(s);
	while (x > 0)
	{
		printf("%c", s[x - 1]);
		x--;
	}
	printf("\n");
}
