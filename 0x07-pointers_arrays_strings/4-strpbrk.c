#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to be checked
 * @accept: string with character to check
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int b = 0;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
