#include "main.h"
/**
 * leet - encodes string to 1337
 * @s: string to check
 * Return: Always 0
 */
char *leet(char *s)
{
	int a;
	int b;
	char x[] = "aAeEoOtTLl";
	char y[] = "4433007711";

	for (a = 0; *(s + a); a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (x[b] == s[a])
				s[a] = y[b];
		}
	}
	return (s);
}
