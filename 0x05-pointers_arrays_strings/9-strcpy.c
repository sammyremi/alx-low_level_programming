#include <string.h>
#include <stdio.h>
/**
 * _strcpy - copy the str from src
 * @src: copy string
 * @dest: copy from src
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src);
{
	int i, x;

	x = strlen(src);
	for (i = 0; i <= x; i++)
	{
		*(x + i) = *(src + i);
	}
	return (x);
}
