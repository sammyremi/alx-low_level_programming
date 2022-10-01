#include <string.h>
#include <stdio.h>
/**
 * _strcpy - copy the str from src
 * @src: copy string
 * @dest: copy from src
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	int i, lent;

	lent = strlen(src);
	for (i = 0; i <= lent; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
