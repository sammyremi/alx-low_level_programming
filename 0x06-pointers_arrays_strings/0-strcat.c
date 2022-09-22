#include "main.h"
/**
 * _strcat - function to concatinate two strings
 * @dest: param1 to concatinate
 * @src: param2 to concatinate
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	char *point;
	int i = 0;
	int j = 0;
	char fstring[];

	point = &fstring;

	while (dest[i] != '\0')
	{
		fstring[i] = dest[i];
		i++;
		j++;
	}

	i = 0;
	while (src[i] != '\0')
	{
		fstring[j] = src[i];
		i++;
		j++;
	}
	fstring[j] = '\0';
	return (point);
}
