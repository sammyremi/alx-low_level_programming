#include "main.h"
/**
 * _strncpy - function to copy string
 * @dest: param1 as destination
 * @src: param2 as source
 * @n: positions to copy
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	for (; x < n; x++)
	{
		dest[x] = '\0';
	}

	return (dest);
}
