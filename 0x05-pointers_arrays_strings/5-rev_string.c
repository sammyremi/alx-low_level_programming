#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverse a string
 * @str: reverse the string
 * Return: Always 0
 */
void rev_string(char *str)
{
	int i, temp;
	int j;

	ni = 0;
	for (i = 0; *(str + i) != '\0'; i++)
	{
		ni++;
	}
	for (j = 0; j < ni / 2; j++)
	{
		temp = *(str + j);
		*(str + j) = *(str + ni - j - 1);
		*(str + ni - j - 1) = temp;
	}
}
