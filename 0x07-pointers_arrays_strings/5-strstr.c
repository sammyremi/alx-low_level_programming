#include "main.h"
#include <stdio.h>
/**
 * _strstr - find first occurance of the substring
 * @haystack: main string to check
 * @needle: substring
 * Return: pointer and NULL if substring not found
 */
char *_strstr(char *haystack, char *needle)
{
	char b;
	char p;

	while (*haystack != '\0')
	{
		b = haystack;
		p = needle;

		while (*haystack != '\0' && *p != '\0' && *haystack == *p)
		{
			haystack++;
			p++;
		}
		if (!*p)
			return (b);
		haystack = b + 1;
	}
	return (0);
}
