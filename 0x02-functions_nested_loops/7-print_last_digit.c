#include "main.h"

/**
 * print_last_digit - Entry point
 *
 *@r:number to be checked
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int r)
{
	r = (r % 10);
	if (r < 0)
	{
		r = (r * -1);
		return (r);
	}
	return (r);
}
