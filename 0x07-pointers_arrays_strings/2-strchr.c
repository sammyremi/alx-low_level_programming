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
	while (s[0] != c && s[00] != '\0')
		s++;
	if (s[0] == '\0')
	{
		return (NULL);
	}
	else
	{
		return ((char *)s);
	}
}
