#include "main.h"
/**
 * _strcmp - function to copy string
 * @s2: param2
 * @s1: param1
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	int large;
	int x = 0;
	int count;
	int y = 0;

	while (s1[x] != '\0')
	{
		x++;
	}
	while (s2[y] != '\0')
	{
		y++;
	}
	if (x < y)
	{
		large = y;
	}
	else if (x > y)
	{
		large = x;
	}
	else
		large = x;

	for (count = 0; count < large; count++)
	{
		if (s1[count] == s2[count])
		{}
		else
			return (s1[count] - s2[count]);
	}
	return (0);
}
