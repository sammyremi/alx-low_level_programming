#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	char sl;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (sl = 'A'; sl <= 'Z'; sl++)
	{
		putchar(sl);
	}
	putchar('\n');
	return (0);
}
