#include "main.h"
#include <stdio.h>
/**
 * _strspn - occurance of the character
 * @accept: character to check
 * @s: string to check in
 * Return: x as int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x;
	unsigned int y;

	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y]; y++)
		{
			if s[x] == accept[y]
			{
				break;
			}
		}
		if (!accept[y])
		{
			break;
		}
	}
	return (x);
}
