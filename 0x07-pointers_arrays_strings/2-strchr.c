#include "main.h"
#include <stdio.h>
/**
 * _strchr - occurance of the character
 * @c: character to check
 * @s: string to check
 * Return: ptr
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
