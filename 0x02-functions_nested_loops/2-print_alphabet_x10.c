#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	for (int alpha = 0; alpha < 10; alpha++)
	{
		for (char alpha2 = 'a'; alpha2 <= 'z'; alpha2++)
		{
			putchar(alpha2);
		}
		putchar('\n');
	}
}
