#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concactinate two strings
 * @s1: first string
 * @s2: second string to concatinate
 * Return: pointer of concact string
 */
char *str_concat(char *s1, char *s2)
{
	int x;
	int y;
	int i;
	int j;
	int len;
	char *newchar;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len = 0; s1[len] != '\0'; len++)
		;
	for (x = 0; s2[x] != '\0'; x++)
		;
	j = len + x;
	newchar = malloc(j * sizeof(*newchar) + 1);

	if (newchar == NULL)
		return (NULL);

	for (y = 0; s1[y] != '\0'; y++)
		newchar[y] = s1[y];

	for (i = 0; s2[i] != '\0'; i++)
	{
		newchar[y] = s2[i];
		y++;
	}
	newchar[y] = '\0';

	return (newchar);
}
