#include "main.h"
/**
 * _strncat - function to concatinate two strings
 * @dest: param1 to concatinate
 * @src: param2 to concatinate
 * @n: position to concatinate
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
