#include "main.h"
/**
 * _strlen - check len of variable
 * @s: var pointer to check
 * Return: Always 0
 */
int _strlen(char *s)
{
	int x;
	int count = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		count++;
	}

	return (count);
}
