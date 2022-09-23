#include "main.h"
/**
 * string_toupper - chnage lowercase into upercase string
 * @s: string to check
 * Return: Always 0
 */
char *string_toupper(char *s)
{
	int x = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] >= 'a' && s[x] <= 'z')
			s[x] = s[x] - 'a' + 'A';
	}
	return (s);
}
