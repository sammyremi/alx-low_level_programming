#include "main.h"

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char character [] = "_putchar";
	int x = 0;
	while (x < 8)
	{
		putchar(character[x]);
		x++;
	}
	putchar('\n')
	return (0);
}
