#include "main.h"
/**
 * _strchr - occurance of the character
 * @c: character to check
 * @s: string to check
 * Return: ptr
 */
char *_strchr(char *s, char c)
{
	char *ptr;

	if (s == NULL)
		return (NULL);
	for (ptr = s; *ptr; ptr++)
	{
		if (*ptr == c)
			return (ptr);
	}
}
